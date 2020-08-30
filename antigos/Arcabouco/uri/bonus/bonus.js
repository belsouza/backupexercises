var input = require('fs').readFileSync('/dev/stdin','utf8');
var lines = input.split('\n');

function bonus( salario, montante)
{
    return (salario + ((montante * 15)/100));
}

var nome = lines.shift();
var salario = parseFloat( lines.shift());
var montante = parseFloat( lines.shift());
console.log('TOTAL = R$ '+ bonus(salario, montante).toFixed(2) );