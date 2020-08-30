import java.util.*
import kotlin.text.*

fun pagamento ( salario: Double, montante : Double) : Double{
    return ( salario + ((montante * 15)/100));
}

fun main(args:Array<String>){
    var input = Scanner(System.`in`)
    var salario : Double; var montante : Double; var resultado : Double; var nome : String
    nome = input.nextLine()
    salario = input.nextDouble()
    montante = input.nextDouble()
    resultado =  pagamento(salario, montante)

    println("TOTAL = R$ %.2f".format(resultado)) 
}