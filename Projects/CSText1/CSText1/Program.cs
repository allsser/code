using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Collections;

interface IOperation
{
    void Insert(string str);
    string Delete();
    bool Search(string str);
    string GetCurrentElt();
    int NumOfElements();
}
class Stack : IOperation
{
    string[] stack;
    int cursor;
    public Stack()
    {
        stack = new string[20];
        cursor = 0;
    }
    public void Insert(string str)
    {
        if(cursor >= stack.Length)
        {
            Console.WriteLine("Stack is full.");
            return;
        }
        stack[cursor++] = str;
    }
    public string Delete()
    {
        if(cursor <= 0)
        {
            Console.WriteLine("Stack is empty.");
            return null;
        }
        string str = stack[--cursor];
        return str;
    }
    public bool Search(string str)
    {
        for(int i=0;i<cursor;i++)
        {
            if(stack[i].Equals(str))
            {
                return true;
            }
        }
        return false;
    }
    public string GetCurrentElt()
    {
        if(cursor<=0)
        {
            Console.WriteLine("Stack is empty.");
            return null;
        }
        string str = stack[cursor - 1];
        return str;
    }
    public int NumOfElements()
    {
        return cursor;
    }
}
class ExerciseCH5_9_1
{
    static void Main(string[] args)
    {
        Stack stack = new Stack();
        stack.Insert("일");
        stack.Insert("이");
        stack.Insert("삼");
        stack.Insert("사");
        Console.WriteLine(stack.GetCurrentElt());
        Console.WriteLine(stack.Search("삼"));
        Console.WriteLine(stack.Delete());
        Console.WriteLine(stack.GetCurrentElt());
        Console.WriteLine(stack.NumOfElements());
        Console.WriteLine(stack.Search("삼"));
    }
}