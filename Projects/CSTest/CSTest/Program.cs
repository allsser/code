using System;
using System.IO;
class ExerciseCH5_6_3
{
    public static void Main()
    {
        using (TextWriter w = File.CreateText("log.txt"))
        {
            w.WriteLine("This is line one");
            w.WriteLine("This is line two");
        }
        using (TextReader r = File.OpenText("log.txt"))
        {
            int c;
            while ((c = r.Read()) != -1)
            {
                Console.Write((char)c);
            }
        }
    }
}