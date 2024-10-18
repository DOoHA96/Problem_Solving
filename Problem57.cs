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


        public static int ReverseNumber(int Number)
        {
            int Remainder = 0, Number2 = 0;
            while (Number > 0)
            {
                Remainder = Number % 10;
                Number = Number / 10;
                Number2 = Number2 * 10 + Remainder;
            }
            return Number2;
        }



            static void Main(string[] args)
            {
            Console.WriteLine("Reverse is:\n" +
                ReverseNumber(ReadPositiveNumber("Please enter a positive number ? "))); 


            }
    }
}