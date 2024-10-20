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

        public static int GetRandomNumber(int Min,int Max)
        {
            Random rand = new Random();
            return rand.Next(Min, Max + 1);
        }


        static void Main(string[] args)
        {
            Console.WriteLine(GetRandomCharacter(enCharType.SamallLetter));
            Console.WriteLine(GetRandomCharacter(enCharType.CapitalLetter));
            Console.WriteLine(GetRandomCharacter(enCharType.SpecialCharacter));
            Console.WriteLine(GetRandomCharacter(enCharType.Digit)); 


        }

    }
}