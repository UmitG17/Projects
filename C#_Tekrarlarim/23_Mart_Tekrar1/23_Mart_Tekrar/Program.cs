using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _23_Mart_Tekrar
{
    class Program
    {
        static void Main(string[] args)
        {

            //100 bulana kadar 0-150 arası sayı üret tek olanları ekrana yazdır,tek adet ve toplam adeti yazdır


            Random rnd = new Random();

            int sayi,tekadet=0,topadet=0;
            while (true)
            {
                topadet++;
                sayi = rnd.Next(0, 150);

                if (sayi==100)
                {
                    break;
                }
                if (sayi%2==0)
                {
                    continue;
                }
                else
                {
                    Console.WriteLine("Sayımız tek :" +sayi);
                    tekadet++;
                }
            }

            Console.WriteLine("Sayımızı bulduk :) : " + sayi);

            Console.WriteLine("Tek sayıların adeti: "+ tekadet);
            Console.WriteLine("Tüm sayıların adeti: " + topadet);


        }
    }
}
