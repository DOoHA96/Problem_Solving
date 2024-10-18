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

        public static void PrintInvertedLetterPattern(int Number)
        {

            for (int i = 1; i <= Number; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    Console.Write((char)(65 + i -1));
                }
                Console.WriteLine();
            }
        }
    


        static void Main(string[] args)
        {
            PrintInvertedLetterPattern(ReadPositiveNumber("Pleas enter a positive Number ? "));

        }

    }
}