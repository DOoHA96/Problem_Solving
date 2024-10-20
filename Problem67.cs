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

        public static string ReadPassword()
        {
            string Password = "";
            Console.WriteLine("Pleas enter a 3-Letter Password (all capital) ? "); ;

            Password = Console.ReadLine();
            return Password;
        }

        public static bool GuessPassword(string OriginalPassword)
        {
            Console.WriteLine();
            string Word = "";
            int Counter = 0;
            for (int i = 65; i <= 90; i++) 
            {
                for (int j = 65; j <= 90; j++) 
{
                    for (int k = 65; k <= 90; k++)
{
                        Word = Word + (char)(i);
                        Word = Word + (char)(j);
                        Word = Word + (char)(k);

                        Counter++;

                        Console.WriteLine("Trial [" + Counter + "] : " +" " + Word);

                        if (Word == OriginalPassword)
                        {
                            Console.WriteLine("\nPassword is " + Word );
                            Console.WriteLine("Found after " + Counter + " Trial(s) ");
                            return true;
                        }

                        Word = "";
                    }
                }
            }
            return false;
        }




        static void Main(string[] args)
        {
            GuessPassword(ReadPassword());
        }

    }
}