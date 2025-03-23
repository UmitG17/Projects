using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _23_Mart_Tekrar4
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Bir cümle giriniz :");

            string cumle = Console.ReadLine();

            for (byte i = 0; i <= cumle.Length - 1; i++)
            {
                for (byte j = 0; j <=i; j++)
                {
                    Console.Write(cumle[j] + " ");
                }
                Console.WriteLine();
            }
            
            
        }
    }
}
