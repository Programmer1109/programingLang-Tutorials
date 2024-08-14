const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask the user for the age
rl.question('Enter your age: ', (input1) => {
    var age = parseFloat(input1);
    
    // Compare the ages and display the result
    if (age <= 12) 
        console.log("\nResult:- Please pay GBP 5.\n");
    else if (age <= 18)
        console.log("\nResult:- Please pay GBP 10.\n");
    else if (age <= 60)
        console.log("\nResult:- Please pay GBP 20.\n");
    else
        console.log("\nResult:- Please pay GBP 15.\n");
        
    // Close the readline interface
    rl.close();
});

