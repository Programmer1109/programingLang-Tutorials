const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask the user for the first number
rl.question('Enter the number: ', (input1) => {
    var number = parseFloat(input1);
    
    // Ask the user for the second number0     
    // Compare the numbers and display the result
    if (number % 2) 
        console.log("\nResult:- " + number + " is odd.\n");
    else
        console.log("\nResult:- " + number + " is even.\n");
        
    // Close the readline interface
    rl.close();
});