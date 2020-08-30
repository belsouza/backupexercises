object Main{
    def soma( a:Int , b:Int) : Int = 
        a + b
    
    def main(args: Array[String]){
        var a = scala.io.StdIn.readInt() : Int
        var b = scala.io.StdIn.readInt() : Int
        var res = soma(a, b)
        printf("SOMA = %d\n", res)
    }
}