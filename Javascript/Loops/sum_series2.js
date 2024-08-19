const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function factorial(number){
    if(number == 0 || number == 1)
        return 1;
    else
        return number * factorial(number-1);
}

// Ask the user for the number
rl.question('Enter No. of terms:- ', (input1) => {
    var terms = parseFloat(input1);
    
    // Ask the user for the second number
    rl.question('Enter value of x:- ', (input2) => {
        var number = parseFloat(input2);
        var sum = 0;
        var exponent = 1;
        var k = 1;

        for(let iter=0; iter<=terms; iter++){
            let numerator = Math.pow(number, exponent);
            let denominator = factorial(exponent);
            sum += k* (numerator/denominator);
            //console.log("N = " + numerator + " D = " + denominator + " Expo = " + exponent + " K-term = " + k);
            exponent += 2;
            k *= -1;
        }

        console.log("Result:- Sum = " + sum.toFixed(3));
        // Close the readline interface
        rl.close();
    });
});

