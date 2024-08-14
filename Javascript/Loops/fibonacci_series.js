const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask the user for the number
rl.question('Enter a No.:- ', (input1) => {
    var no_terms = parseFloat(input1);
    
    var term1 = 0;
    var term2 = 1;
    let sum = 0;

    console.log("\nFibonacci Series:- \n0\n1")
    for(let iter = 1; iter <= no_terms-2; iter++){
        sum = term2 + term1;
        term1 = term2;
        term2 = sum;
        console.log(sum);
    }
    
    // Close the readline interface
    rl.close();
});

