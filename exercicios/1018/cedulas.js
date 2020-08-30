var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var n = parseInt(lines);
console.log ("%d nota(s) de R$ 100,00", Math.floor(n / 100));
n = n % 100;
console.log ("%d nota(s) de R$ 50,00", Math.floor(n / 50));
n = n % 50;
console.log ("%d nota(s) de R$ 20,00", Math.floor(n / 20));
n = n % 20;
console.log ("%d nota(s) de R$ 10,00", Math.floor(n / 10));
n = n % 10;
console.log ("%d nota(s) de R$ 5,00", Math.floor(n / 5));
n = n % 5;
console.log ("%d nota(s) de R$ 2,00", Math.floor(n / 2));
n = n % 2;
console.log ("%d nota(s) de R$ 1,00", Math.floor(n));
