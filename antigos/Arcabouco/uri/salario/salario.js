//var input = require('fs').readFileSync('stdin.txt', 'utf8');
var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function calculasalario( horas, valor ){
    return horas * valor;
}

var num = parseInt( lines.shift());
var horas = parseInt( lines.shift())
var valor = parseFloat( lines.shift());

var foo = calculasalario(horas, valor);
console.log("NUMBER = %d", num);
console.log("SALARY = U$", foo.toFixed(2) );

