import java.util.Scanner

fun distanciadp( xp1: Double,  yp1: Double,  xp2: Double,  yp2: Double ): Double {
    var base : Double;
    base = Math.pow((xp2 - xp1) ,2.0) + Math.pow((yp2 - yp1), 2.0);
    return ( Math.sqrt( base ));
}

fun main(args: Array<String>){
    var (xp1, yp1) = readLine()!!.split(' ').map(String::toDouble )
    var (xp2, yp2) = readLine()!!.split(' ').map(String::toDouble )
    var res = distanciadp(xp1, yp1, xp2, yp2)
    println("%.4f".format(res))
}