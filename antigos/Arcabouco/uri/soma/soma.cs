using System;
using System.Collections.Generic;
using System.Text;

namespace URI
{
    class URI
    {
        static int somasimples( int a, int b )
        {
            return (a + b);
        }

        static void Main( String[] args )
        {
            int a, b;
            a = Convert.ToInt32( Console.ReadLine());
            b = Convert.ToInt32( Console.ReadLine());
            Console.WriteLine("SOMA = {0}", somasimples(a, b));
        }
    }
}