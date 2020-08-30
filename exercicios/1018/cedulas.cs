//1016
using System;

namespace exercicios{

    class dp{
        static void Main(string[] args){
            int n;
            n = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("{0} nota(s) de R$ 100,00", n / 100);
            n = n % 100;
            Console.WriteLine("{0} nota(s) de R$ 50,00", n / 50);
            n = n % 50;
            Console.WriteLine("{0} nota(s) de R$ 20,00", n / 20);
            n = n % 20;
            Console.WriteLine("{0} nota(s) de R$ 10,00", n / 10);
            n = n % 10;
            Console.WriteLine("{0} nota(s) de R$ 5,00", n / 5);
            n = n % 5;
            Console.WriteLine("{0} nota(s) de R$ 2,00", n / 2);
            n = n % 2;
            Console.WriteLine("{0} nota(s) de R$ 1,00", n);
        }
    }
    
}