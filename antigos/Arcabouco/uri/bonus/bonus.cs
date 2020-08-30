using System;
using System.Collections.Generic;
using System.Globalization;
using System.Text;

namespace Bonus{

    class URI{

        static double meubonus( double salario, double montante)
        {
            return ( salario + ((montante * 15) /100));
        }

        static void Main( String[] args )
        {
            string nome;
            double salario, montante;
            nome = Console.ReadLine();
            salario = Convert.ToDouble( Console.ReadLine(), CultureInfo.InvariantCulture);
            montante = Convert.ToDouble( Console.ReadLine(), CultureInfo.InvariantCulture);
            Console.WriteLine(String.Format("TOTAL = R$ {0:0.00}", meubonus(salario, montante)));
        }
    }
}