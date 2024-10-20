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

        public static string ReadText()
        {
            string Text;
            Console.WriteLine("Please enter Text?"); ;
            Text = Console.ReadLine();
            return Text;
        }

        public static string EncryptText(string Text, short EncryptionKey)
        {
            string EncryptText = "";
            
            for (int i = 0; i < Text.Length; i++)
            {
                EncryptText += (char)(((int)Text[i]) + EncryptionKey);
            }
            return EncryptText;
        }

        public static string DecryptText(string Text, short EncryptionKey)
        {
            string DecryptText = string.Empty;
            for (int i = 0; i < Text.Length; i++)
            {
                DecryptText += (char)(((int)Text[i]) - EncryptionKey);
            }
            return DecryptText;
        }


        static void Main(string[] args)
        {
            const short EncryptionKey = 10; 

            string TextAfterEncryption, TextAfterDecryption;

            string Text = ReadText();

            TextAfterEncryption = EncryptText(Text, EncryptionKey);
           TextAfterDecryption = DecryptText(TextAfterEncryption,EncryptionKey);

            Console.WriteLine("Text Before Encryption : " + Text);
            Console.WriteLine("Text After Encryption : " + TextAfterEncryption);
           Console.WriteLine("Text After Decryption : " + TextAfterDecryption);
        }

    }
}