using System;
using System.Collections.Generic;
using System.Text;

namespace Produto
{
    class Produto{

        static int produto( int a, int b){
            return a * b;
        }

        static void Main( String[] args)
        {
            int a, b, prod;
            a = Convert.ToInt32(Console.ReadLine());
            b = Convert.ToInt32(Console.ReadLine());
            prod = produto(a, b);
            Console.WriteLine("PROD = {0}", prod);
        }

    }
}