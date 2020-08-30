var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function food( n ){
    if(n > 60){
        return(food(n % 60));
    }else{
        return(n%60);
    }
}

var n = parseInt(lines);
var s = parseInt( food(n) );
var m = parseInt( food(n / 60));
var h = parseInt( food(n / 3600));
console.log ("%d:%d:%d\n",h,m,s);
