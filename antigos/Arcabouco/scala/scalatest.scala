
object Main {

    def soma(x: Int, y: Int): Int = x + y

    def main(args: Array[String]) {

        
        var a = scala.io.StdIn.readInt() : Int
        var b = scala.io.StdIn.readInt() : Int

        printf("X = %d\n", soma(a, b))
    }

}