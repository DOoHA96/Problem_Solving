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

        public static void PrintInvertedNumberPattern(int Number)
        {

            for (int i = Number; i >= 1; i--)
            {
                for (int j = 1; j <= i; j++)
                {
                    Console.Write(i);
                }
                Console.WriteLine();
            }
        }
    


        static void Main(string[] args)
        {
            PrintInvertedNumberPattern(ReadPositiveNumber("Pleas enter a positive Number ? "));

        }

    }
}