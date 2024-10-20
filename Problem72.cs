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
                Number = Convert.ToInt16(Console.ReadLine());

            } while (Number <= 0);
            return Number;
        }


        public static void ReadArray(ref int[] arr,ref int arrLength)
        {
            Console.WriteLine("Enter number of elements:");
            arrLength = Convert.ToInt16(Console.ReadLine());
            Console.WriteLine("Enter array elements: "); ;
            for (int i = 0; i < arrLength; i++)
            {
                Console.Write("Element [" + (i+1) + "] : "); 
                arr[i] = Convert.ToInt16(Console.ReadLine());
            }
            Console.WriteLine();
        }

        public static void PrintArray(int[] arr, int arrLength)
        {
            for (int i = 0; i < arrLength; i++)
            {
               Console.Write(arr[i] + " ");
            }

            Console.WriteLine();
        }

        public static int TimesRepeated(int Number, int[] arr, int arrLength)
        {
            int count = 0;
            for (int i = 0; i <= arrLength - 1; i++)
            {
                if (Number == arr[i])
                {
                    count++;
                }
            }
            return count;
        }


        static void Main(string[] args)
        {
            int[] arr = new int[100];
            int arrlength = 0, NumberToCheck = 0;

            ReadArray(ref arr, ref arrlength);

            NumberToCheck = ReadPositiveNumber("Enter the number you want to check: ");
            Console.WriteLine("Original array: ");

            PrintArray(arr, arrlength);

            Console.Write("Number " + NumberToCheck + " is repeated ");
            Console.Write(TimesRepeated(NumberToCheck, arr, arrlength) + " time(s)\n");


        }

    }
}