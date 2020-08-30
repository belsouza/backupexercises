import java.util.Scanner

object Main {

    def main(args: Array[String]) {
        var n : Int = (scala.io.StdIn.readLine()).toInt
        var p = Array(100, 50, 20, 10, 5, 2, 1)
        for( x <- p ){
            //println(f"$n%d") 
            println((n / x) + " nota(s) de R$ " + (x)+",00")
            n = n % x
        }
    }

}