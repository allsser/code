using System;
/*class MethodOverloadingApp //메소드 중복
{
    void SomeThing()
    {
        Console.WriteLine("SomeThing() is called.");
    }
    void SomeThing(int i)
    {
        Console.WriteLine("SomeThing(int) is called.");
    }
    void SomeThing(int i, int j)
    {
        Console.WriteLine("SomeThing(int, int) is called.");
    }
    void SomeThing(double d)
    {
        Console.WriteLine("SomeThing(double) is called.");
    }
    public static void Main()
    {
        MethodOverloadingApp obj = new MethodOverloadingApp();
        obj.SomeThing();
        obj.SomeThing(6);
        obj.SomeThing(1, 2);
        obj.SomeThing(-1);
    }
}

class Fraction
{
    int numerator;  //분자 필드
    int denominator;  //분모 필드
    public Fraction()
    {
        numerator = 0;
        denominator = 1;
    }
    public Fraction(int n) //생성자
    {
        numerator = n;
        denominator = 1;
    }
    public Fraction(int n, int d) //생성자
    {
        numerator = n;
        denominator = d;
    }
    public override string ToString()
    {
        return (numerator + "/" + denominator);
    }
}
class OverloadedConstructorApp
{
    public static void Main()
    {
        Fraction f1 = new Fraction();
        Fraction f2 = new Fraction(2);
        Fraction f3 = new Fraction(1, 2);
        Console.WriteLine("f1={0}, f2={1}, f3={2}", f1, f2, f3);
    }
}*/

class StaticConstructor
{
    static int staticWithInitializer = 100;
    static int staticWithNoInitializer;
    StaticConstructor()
    {
        staticWithNoInitializer = staticWithInitializer + 100;
    }
    public static void PrintStaticVariable()
    {
        Console.WriteLine("field 1 = {0}, field = {1}", staticWithInitializer, staticWithNoInitializer);
    }
}
class StaticConstructorApp
{
    public static void Main()
    {
        StaticConstructor.PrintStaticVariable();
    }
}