using System;
using System.Globalization;

namespace SobreExercicios
{
    class MediaNum
    {
        static double peso1;
        static double peso2;


        static double calculamedia(double notaA, double notaB)
        {
            double h;
            h = ( (notaA * peso1) + (notaB * peso2) ) / 11.0;            
            return h;
        }

        public MediaNum()
        {
            peso1 = 3.5;
            peso2 = 7.5;
        }
        public void Show()
        {
            double notaA, notaB, numedia;
            notaA = Convert.ToDouble(Console.ReadLine(), CultureInfo.InvariantCulture);
            notaB = Convert.ToDouble(Console.ReadLine(), CultureInfo.InvariantCulture);
            numedia = calculamedia(notaA, notaB);
            Console.WriteLine("MEDIA = {0:0.00000}", numedia);
        }
    };    
    class Media
    {
        public static void Main(string[] args)
        {
            MediaNum foo = new MediaNum();
            foo.Show();
        }
    }    
}