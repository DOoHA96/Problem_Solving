using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem_Solving
{
    internal class Program
    {

        public static int ReadPositiveNumber(string Message)
        {
            int Number = 0;
            do
            {
                Console.WriteLine(Message);
                Number =Convert.ToInt16( Console.ReadLine());

            } while (Number <= 0);
            return Number;
        }


        public static void PrintDigits(int Number)
        {
            int Remainder = 0;
            while (Number > 0)
            {
                Remainder = Number % 10;
                Number = Number / 10;
                Console.Write(Remainder +"  ");
            }
        }



        static void Main(string[] args)
        {
            PrintDigits(ReadPositiveNumber("Please enter a positivenumber ? "));
        }
    }
}