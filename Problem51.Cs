using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem_Solving
{
    internal class Program
    {
        public static void PrintTableHeader()
        {
            Console.WriteLine("\n\n\t\t\t Multipliaction Table From 1 to 10\n");
            Console.Write("\t"); 
            for (int i = 1; i <= 10; i++)
            {
                Console.Write(i + "\t");  // Print ( 1 2 3 ...)
            }
            Console.Write("\n___________________________________________________________________________________\n");
            
        }

        public static string ColumnSperator(int i)
        {
            if (i < 10)
                return "  |";
            else
                return " |";
        }


        public static void PrintMultiplicationTable()
        {

         PrintTableHeader();
            for (int i = 1; i <= 10; i++)
            {
                Console.Write(" " + i + ColumnSperator(i) + "\t");
                for (int j = 1; j <= 10; j++) 
                {
                    Console.Write(j * i + "\t");
                }
                Console.WriteLine();
            }
         }


        static void Main(string[] args)
        {
            PrintMultiplicationTable();
        }
    }
}