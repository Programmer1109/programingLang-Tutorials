const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask the user for the number
rl.question('Enter the start index:- ', (input1) => {
    var start = parseFloat(input1);
    
    rl.question('Enter the last index:- ', (input2) => {
        var last = parseFloat(input2);

        for (let number = start; number < last+1; number++){
            if (number % 2) 
                console.log("\nResult:- " + number + " is odd.\n");
            else
                console.log("\nResult:- " + number + " is even.\n");
        }

        // Close the readline interface
        rl.close();
    });
});

