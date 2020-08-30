import java.util.Scanner

object Main {

    def timming(n: Int): Int = {
        if(n > 60){
            return timming(n % 60)
        }
        else
        {
            return (n % 60)
        }
    }

    def main(args: Array[String]) {
        var n : Int = (scala.io.StdIn.readLine()).toInt
        var s = timming(n)
        var m = timming(n / 60)
        var h = timming(n / 3600)
        println((h) + ":" + (m) + ":" + (s))
        
    }

}