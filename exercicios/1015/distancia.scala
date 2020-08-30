object Main{

    def distanciadp( xp1:Double, yp1:Double, xp2:Double, yp2:Double ): Double = { 
        var base : Double = scala.math.pow((xp2 - xp1) ,2) + scala.math.pow((yp2 - yp1), 2);
        return scala.math.sqrt( base );
    }

    def main(args: Array[String]){
        var linha1 = scala.io.StdIn.readLine().split(" ")     
        var linha2 = scala.io.StdIn.readLine().split(" ")
        var xp1 = linha1(0).toDouble
        var yp1 = linha1(1).toDouble
        var xp2 = linha2(0).toDouble
        var yp2 = linha2(1).toDouble
        var res = distanciadp( xp1, yp1, xp2, yp2 )   
        printf("%.4f\n", res)
    }
}