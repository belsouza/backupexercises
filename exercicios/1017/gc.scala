import java.util.Scanner

object Main {

    def main(args: Array[String]) {
        val th : Double = (scala.io.StdIn.readLine()).toDouble
        val v : Double = (scala.io.StdIn.readLine()).toDouble
        var ql : Double = (th * v) / 12.0        
        println(f"$ql%.3f")      
    }

}