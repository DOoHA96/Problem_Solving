using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem_Solving
{
    internal class Program
    {

        private static readonly Random rand = new Random();

        public static int GetRandomNumber(int Min ,int Max)
        {
            return rand.Next(Min, Max + 1);
        }

        public static

            void FillArrayWithRandomNumbers(ref int[] arr,ref int arrLength)
        {
            Console.Write("Enter number of elements:\n"); ;
            arrLength = Convert.ToInt16(Console.ReadLine());

            for (int i = 0; i < arrLength; i++) 
                arr[i] = GetRandomNumber(1, 100); 
        }

        public static void PrintArray(int[] arr, int arrLength)
        {
            for (int i = 0; i < arrLength; i++)
            {
               Console.Write(arr[i] + " ");
            }

            Console.WriteLine();
        }

        public static int MinNumberInArray(int[] arr, int arrLength)
        {
            int Max = arr[0];
            for (int i = 0; i < arrLength; i++)
            {
                if (arr[i] < Max)
                {
                    Max = arr[i];
                }
            }
            return Max;
        }

        static void Main(string[] args)
        {
            int[] arr = new int[100];
            int arrlength = 0;

            FillArrayWithRandomNumbers(ref arr, ref arrlength);

            Console.WriteLine("Array Elements: ");

            PrintArray(arr, arrlength);

            Console.WriteLine("Min Number is : " + MinNumberInArray(arr, arrlength)); ;


        }

    }
}