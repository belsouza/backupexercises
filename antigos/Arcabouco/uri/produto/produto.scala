object Main{
    def produto( a: Int, b: Int) : Int =
        a * b

    def main( args: Array[String]){
        var a = scala.io.StdIn.readInt : Int
        var b = scala.io.StdIn.readInt : Int
        var prod = produto(a, b)
        printf("PROD = %d\n", prod )
    }
}