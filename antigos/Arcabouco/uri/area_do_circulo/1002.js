var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function areadocirculo( raio ){
    return 3.14159 * raio * raio;
}
    
var raio = parseFloat(lines.shift());

console.log('A=' + areadocirculo(raio).toFixed(4));