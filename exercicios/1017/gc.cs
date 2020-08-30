//1016
using System;

namespace exercicios{

    class dp{
        static void Main(string[] args){
            double ql, v, th;
            th = Convert.ToDouble(Console.ReadLine());
            v = Convert.ToDouble(Console.ReadLine());
            ql = (th * v) / 12.0;
            Console.WriteLine( String.Format("{0:0.000}", ql));
        }
    }
    
}