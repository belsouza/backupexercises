using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using System.Globalization;

namespace foo{

    class dist{

        public static double xp1, xp2, yp1, yp2, res;

        public static double distdp( double xp1, double yp1, double xp2, double yp2 )
        {
            double res = Math.Pow((xp2 - xp1), 2) + Math.Pow((yp2 - yp1), 2);
            return (Math.Sqrt(res));
        }
        static void Main( string[] args )
        {
            CultureInfo culture = new CultureInfo("en-US");
            string[] p1, p2;
            string x = Console.ReadLine();
            string y = Console.ReadLine();
            p1 = Regex.Split(x, @"\s+");
            p2 = Regex.Split(y, @"\s+");
            xp1 = Double.Parse(p1[0], culture);
            yp1 = Double.Parse(p1[1], culture);
            xp2 = Double.Parse(p2[0], culture);
            yp2 = Double.Parse(p2[1], culture);

            res = Convert.ToDouble( distdp(xp1, yp1, xp2, yp2),  CultureInfo.InvariantCulture );                        
            Console.WriteLine( String.Format("{0:0.0000}", res));
        }
    }
    

}