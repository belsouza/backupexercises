using System;

namespace ct{
    
    class ct{

        private static int coin( int n ){
            int temp;
            if(n > 60){
                temp = coin(n % 60);
                return (temp);
            }
            else{
                return (n % 60);
            }
        }

        static void Main(string[] args){

            int n, s, m, h;

            try{

                n = Convert.ToInt32(Console.ReadLine());

                h = coin(n / 3600);
                Console.Write("{0}:", h);

                m = coin(n / 60);
                Console.Write("{0}:", m);

                s = coin(n);
                Console.Write("{0}\n", s);    

            }catch(Exception e)
            {
                Console.WriteLine(e);
            }

        }
    }
}