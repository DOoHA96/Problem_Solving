using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem_Solving
{
    internal class Program
    {

        public enum enCharType
        {
            SamallLetter = 1, CapitalLetter = 2,
            SpecialCharacter = 3, Digit = 4
        };

        public static char GetRandomCharacter(enCharType CharType)
        {
            switch (CharType)
            {
                case enCharType.SamallLetter:
                    {
                        return (char)GetRandomNumber(97, 122);
                    }
                case enCharType.CapitalLetter:
                    {
                        return (char)GetRandomNumber(65, 90);
                    }
                case enCharType.SpecialCharacter:
                    {
                        return (char)GetRandomNumber(33, 47);
                    }
                default:
                    {
                        return (char)GetRandomNumber(48, 57);
                    }
            }
            
        }

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

        private static readonly Random rand = new Random();
        public static int GetRandomNumber(int Min,int Max)
        {

            //Random rand = new Random();
            return rand.Next(Min, Max + 1);
        }

        public static string GenerateWord(enCharType CharType, short Length)
        {
            string Word = "";
            for (int i = 1; i <= Length; i++)
            {
                Word = Word + GetRandomCharacter(CharType);
            }
            return Word;
        }

        public static string GenerateKey()
        {
            string Key = "";
            Key = GenerateWord(enCharType.CapitalLetter, 4) + "-";
            Key = Key + GenerateWord(enCharType.CapitalLetter, 4) + "-";
            Key = Key + GenerateWord(enCharType.CapitalLetter, 4) + "-";
            Key = Key + GenerateWord(enCharType.CapitalLetter, 4);
            return Key;
        }


        public static void GenerateKeys(int NumberOfKeys)
        {
            for (int i = 1; i <= NumberOfKeys; i++)
            {
                Console.WriteLine("Key [" + i + "] : " + GenerateKey());

            }
        }


        static void Main(string[] args)
        {

            GenerateKeys(ReadPositiveNumber("Pleaes enter how many keys to generate ?  "));

        }

    }
}