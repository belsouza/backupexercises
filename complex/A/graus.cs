using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using System.Globalization;

namespace exercicios
{
    class grau_csharp
    {
        public static int converter(int grau, int referencia)
        {
            return ((grau * referencia) / 360);
        }

        public static void coordenar(int horas, int minutos){

	        int a, b;
	        a = converter( horas, 12 );
	        b = converter( minutos, 60 );
	        Console.WriteLine( String.Format("{00:00}", a, b ));
        }

        static void Main(String[] args)
        {
            int h, m;
            while (fscanf(stdin, "%d  %d", &h, &m) != EOF)
            {
                coordenar(h, m);
            }
            return 0;
        }
    }


}

