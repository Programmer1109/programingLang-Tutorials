const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function exponentiation(base, power){
    if (power == 0)
        return 1;
    else if (power == 1)
        return base;
    else{
        var result = 1;
        for(let iter=1; iter<=power; iter++)
            result *= base;
        return result;
    }
}

// Ask the user for the number
rl.question('Enter No. of terms:- ', (input1) => {
    var terms = parseFloat(input1);
    
    // Ask the user for the second number
    rl.question('Enter value of x:- ', (input2) => {
        var number = parseFloat(input2);
        var sum = 0;

        for(let iter=0; iter<=terms; iter++){
            console.log("Iteration " + iter +":- ");
            let numerator = Math.pow(number, iter);
            let denominator = exponentiation(2, iter);
            console.log("N = " + numerator + " D = " + denominator + " P = " + iter);
            sum += numerator/denominator;
        }

        sum -= number/2;
        console.log("Result:- Sum = " + sum.toFixed(3));
        // Close the readline interface
        rl.close();
    });
});

