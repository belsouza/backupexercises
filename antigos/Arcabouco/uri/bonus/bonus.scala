object Main{
    def calculabonus(salario:Double, montante:Double):Double =
        salario + ( (montante * 15.0) / 100.0 )

    def main(args:Array[String])
    {
        var nome = scala.io.StdIn.readLine() : String
        var salario = scala.io.StdIn.readDouble() : Double
        var montante = scala.io.StdIn.readDouble() : Double
        var resultado = calculabonus(salario, montante) : Double
        printf("TOTAL = R$ %.2f\n", resultado);
    }
}