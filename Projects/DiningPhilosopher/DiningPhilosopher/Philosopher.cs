using System;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using System.Diagnostics;

namespace DiningPhilosophers
{
    class Program
    {
        private const int PHILOSOPHER_COUNT = 5;

        static void Main(string[] args)
        {
            var philosophers = InitializePhilosophers();
            Console.WriteLine("식사를 시작합니다!");
            var philosopherThreads = new List<Thread>();
            foreach (var philosopher in philosophers)
            {
                var philosopherThread = new Thread(new ThreadStart(philosopher.EatAll));
                philosopherThreads.Add(philosopherThread);
                philosopherThread.Start();
            }
  
            foreach (var thread in philosopherThreads)
            {
                thread.Join();
            }

            Console.WriteLine("식사가 끝났습니다!");
        }

        private static List<Philosopher> InitializePhilosophers()
        {
            
            var philosophers = new List<Philosopher>(PHILOSOPHER_COUNT);
            for (int i = 0; i < PHILOSOPHER_COUNT; i++)
            {
                philosophers.Add(new Philosopher(philosophers, i));
            }
           
            foreach (var philosopher in philosophers)
            {
                
                philosopher.LeftChopstick = philosopher.LeftPhilosopher.RightChopstick ?? new Chopstick();
              
                philosopher.RightChopstick = philosopher.RightPhilosopher.LeftChopstick ?? new Chopstick();
            }
            return philosophers;
        }
    }

    [DebuggerDisplay("Name = {Name}")]
    public class Philosopher
    {
        private const int TIMES_TO_EAT = 5;
        private int _timesEaten = 0;
        private readonly List<Philosopher> _allPhilosophers;
        private readonly int _index;

        public Philosopher(List<Philosopher> allPhilosophers, int index)
        {
            _allPhilosophers = allPhilosophers;
            _index = index;
            this.Name = string.Format("철학자 {0}", _index);
            this.State = State.Thinking;
        }
        public string Name { get; private set; }
        public State State { get; private set; }
        public Chopstick LeftChopstick { get; set; }
        public Chopstick RightChopstick { get; set; }

        public Philosopher LeftPhilosopher
        {
            get
            {
                if (_index == 0)
                    return _allPhilosophers[_allPhilosophers.Count - 1];
                else
                    return _allPhilosophers[_index - 1];
            }
        }

        public Philosopher RightPhilosopher
        {
            get
            {
                if (_index == _allPhilosophers.Count - 1)
                    return _allPhilosophers[0];
                else
                    return _allPhilosophers[_index + 1];
            }
        }

        public void EatAll()
        {
         
            while (_timesEaten < TIMES_TO_EAT)
            {
                this.Think();
                if (this.PickUp())
                {
                    
                    this.Eat();
                    this.PutDownLeft();
                    this.PutDownRight();
                }
            }
        }

        private bool PickUp()
        {
            if (Monitor.TryEnter(this.LeftChopstick))
            {
                Console.WriteLine(this.Name + " 왼쪽에 있는 젓가락을 들었습니다.");
                if (Monitor.TryEnter(this.RightChopstick))
                {
                    Console.WriteLine(this.Name + " 오른쪽에 있는 젓가락을 들었습니다..");
                    return true;
                }
                else
                {
                    this.PutDownLeft();
                }
            }
            return false;
        }

        private void Eat()
        {
            this.State = State.Eating;
            _timesEaten++;
            Console.WriteLine(this.Name + " 식사중 입니다.");
        }

        private void PutDownLeft()
        {
            Monitor.Exit(this.LeftChopstick);
            Console.WriteLine(this.Name + " 왼쪽에 있는 젓가락을 내려 놓습니다.");
        }
        private void PutDownRight()
        {
            Monitor.Exit(this.RightChopstick);
            Console.WriteLine(this.Name + " 오른쪽에 있는 젓가락을 내려 놓습니다.");
        }

        private void Think()
        {
            this.State = State.Thinking;
        }
    }

    public enum State
    {
        Thinking = 0,
        Eating = 1
    }

    [DebuggerDisplay("Name = {Name}")]
    public class Chopstick
    {
        private static int _count = 1;
        public string Name { get; private set; }

        public Chopstick()
        {
            this.Name = "Chopstick " + _count++;
        }
    }
}