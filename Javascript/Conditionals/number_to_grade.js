const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask the user for the first number
rl.question('Enter the percentage: ', (input1) => {
    var number = parseFloat(input1);
    
    // Ask the user for the second number0     
    // Compare the numbers and display the result
    if (number >= 90) 
        console.log("\nResult:- You have recieved GRADE S.\n");
    else if (number >= 80)
        console.log("\nResult:- You have recieved GRADE A.\n");
    else if (number >= 70)
        console.log("\nResult:- You have recieved GRADE B.\n");
    else if (number >= 60)
        console.log("\nResult:- You have recieved GRADE C.\n");
    else if (number >= 50)
        console.log("\nResult:- You have recieved GRADE D.\n");
    else
        console.log("\nResult:- We are extremely sorry. You have FAILED, GRADE F.\n");
        
    // Close the readline interface
    rl.close();
});

