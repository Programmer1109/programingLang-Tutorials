const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask the user for the first number
rl.question('Enter the first number: ', (input1) => {
    var firstNum = parseFloat(input1);
    
    // Ask the user for the second number
    rl.question('Enter the second number: ', (input2) => {
        var secondNum = parseFloat(input2);
        
        // Compare the numbers and display the result
        if (firstNum == secondNum) {
            console.log("\nResult:- " + firstNum + " is equal to " + secondNum);
        } else {
            console.log("\nResult:- " + firstNum + " is not equal to " + secondNum);
        }
        
        // Close the readline interface
        rl.close();
    });
});
