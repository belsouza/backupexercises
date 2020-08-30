using System;
using System.Globalization;

namespace media_tres
{
    class MediaNum
    {
        static double calculamedia(double notaA, double notaB, double notaC)
        {
            double h;
            h = ((notaA * 2.0) + (notaB * 3.0) + (notaC * 5.0)) / 10.0;          
            return h;
        }        
        public void Show()
        {
            double notaA, notaB, notaC, numedia;
            notaA = Convert.ToDouble(Console.ReadLine(), CultureInfo.InvariantCulture);
            notaB = Convert.ToDouble(Console.ReadLine(), CultureInfo.InvariantCulture);
            notaC = Convert.ToDouble(Console.ReadLine(), CultureInfo.InvariantCulture);
            numedia = calculamedia(notaA, notaB, notaC);
            Console.WriteLine("MEDIA = {0:0.0}", numedia);
        }
    };    
    class media_tres
    {
        public static void Main(string[] args)
        {
            MediaNum foo = new MediaNum();
            foo.Show();
        }
    }    
}