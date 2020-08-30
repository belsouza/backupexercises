using System;
using System.Collections.Generic;
using System.Globalization;
using System.Text;


namespace URI
{
    public struct funcsalario
    {
        public Int32 num;
        public Int32 horastrabalhadas;
        public Double porhora;
    }   

    class URI
    {
        static double calculasalario( int horas, double valsalario )
        {
            return (horas * valsalario);
        }
        static void Main( string[] args )
        {
            double result;
            funcsalario func;
            func.num = Convert.ToInt32(Console.ReadLine());
            func.horastrabalhadas = Convert.ToInt32(Console.ReadLine());
            func.porhora = Convert.ToDouble(Console.ReadLine(), CultureInfo.InvariantCulture);
            result = calculasalario(func.horastrabalhadas, func.porhora);
            Console.WriteLine("NUMBER = {0}", func.num);
            Console.WriteLine( String.Format("SALARY = U$ {0:0.00}", result ));
        }
    }
}
