object Main{
    def foo(tempo: Int, salario: Double) : Double =
        tempo * salario

    def main(args: Array[String]){
        var num = scala.io.StdIn.readInt() : Int
        var tempo = scala.io.StdIn.readInt() : Int
        var salario = scala.io.StdIn.readDouble() : Double
        
        var resultado = foo(tempo, salario)
        printf("NUMBER = %d\nSALARY = U$ %.2f\n", num, resultado );
    }
}