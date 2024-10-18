using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem_Solving
{
    internal class Program
    {

        public static void PrintWordsFromAAAtoZZZ()
        {
            Console.WriteLine();
            string Word = "";
            for (int i = 65; i <= 90; i++) 
            {
                for (int j = 65; j <= 90; j++) 
                {
                    for (int k = 65; k <= 90; k++)
                    {
                        Word = Word + (char)(i);
                        Word = Word + (char)(j);
                        Word = Word + (char)(k);

                        Console.WriteLine(Word);

                        Word = "";
                    }
                }
                Console.WriteLine("______________________________");
            }
        }




        static void Main(string[] args)
        {
            PrintWordsFromAAAtoZZZ();
        }

    }
}