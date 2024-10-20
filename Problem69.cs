using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem_Solving
{
    internal class Program
    {


        public static int GetRandomNumber(int Min,int Max)
        {
            Random rand = new Random();
            return rand.Next(Min, Max + 1);
        }


        static void Main(string[] args)
        {
            Console.WriteLine(GetRandomNumber(1, 10));
            
        }

    }
}