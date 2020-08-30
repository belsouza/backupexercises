using System;
using System.Collections.Generic;
using System.Text;
using System.Globalization;
using System.Text.RegularExpressions;

namespace SobreExercicios
{
    class Pecas
    {
        public int cod;
        public int npecas;
        public double valor;
    }

    class calculosimples
    {
        
        private static double calcular( Pecas x, Pecas y )
        {
            return ((x.npecas * x.valor) + (y.npecas * y.valor));
        }

        private static Pecas expandir( string linha )
        {
            Pecas foo = new Pecas();
            string[] x = Regex.Split(linha, @"\s+");
            foo.cod = Convert.ToInt32(x[0]);
            foo.npecas = Convert.ToInt32(x[1]);
            foo.valor = Convert.ToDouble(x[2], CultureInfo.InvariantCulture);
            return foo;
        }

        private static double extract(string linhaA, string linhaB)
        {
            Pecas f1 = expandir(linhaA);
            Pecas f2 = expandir(linhaB);
            double resposta = calcular(f1, f2);
            return resposta;
        }  
        static void Main(string[] args)
        {
            string linhaA, linhaB;
            linhaA = Console.ReadLine();
            linhaB = Console.ReadLine();
            double resultado;
            resultado = extract(linhaA, linhaB);
            Console.WriteLine("VALOR A PAGAR: R$ {0:0.00}", resultado);
        }
    }
}
