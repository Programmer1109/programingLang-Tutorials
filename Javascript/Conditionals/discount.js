const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask the user for the amount
rl.question('Enter the amount: ', (input1) => {
    var amount = parseFloat(input1);
    var discount = 0;

    // Compare the amounts and display the result
    if (amount >= 100) 
        discount = 20;
    else if (amount >= 50)
        discount = 10;
    // Close the readline interface
    console.log("\nDiscount = GBP " + discount);
    rl.close();
});

