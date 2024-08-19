const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask the user for the number
rl.question('Enter No. of terms:- ', (input1) => {
    var terms = parseFloat(input1);
    
        var sum = 0;
        
        for (let loopVar=1; loopVar<=terms; loopVar++){
            for (let iter=i; iter<=loopVar; iter++)
                sum += iter;
        }

        console.log("Result:- Sum = " + sum.toFixed(3));
        // Close the readline interface
        rl.close();
});

