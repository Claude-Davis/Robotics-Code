using System;
public class Calculator
{
    public static void Main(string[] args)
    {
        //request numbers input
		Console.WriteLine("Input first number: ");
        string firstNum = Console.ReadLine();
        int first = Convert.ToInt32(firstNum); //convert first number input from type string to type int
		Console.WriteLine("Input second number: ");
        string secondNum = Console.ReadLine();
        int second = Convert.ToInt32(secondNum); //convert second number input from type string to type int

        //addition
        Console.Write("{first} + {second} = ");
        Console.WriteLine(first + second);

        //subtraction
        Console.Write("{first} - {second} = ");
        Console.WriteLine(first - second);

        //multiplication
        Console.Write("{first} x {second} = ");
        Console.WriteLine(first * second);

        //division
        Console.Write("{first}/{second} = ");
        Console.WriteLine(first/second);

        //remainder
        Console.Write("The remainder of {first} divided by {second} is ");
        Console.Write(first%second);
    }
}
