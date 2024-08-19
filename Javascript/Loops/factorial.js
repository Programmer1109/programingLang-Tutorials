const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask the user for the number
rl.question('Enter a No.:- ', (input1) => {
    var number = parseFloat(input1);
    var factorial = 1;


    // Compare the numbers and display the result
    if (number < 0)
        console.log("\nError:- Can't compute factorial of negative numbers!!!\n");
    else if( number == 0 || number == 1 || number == 2)
        console.log("\nResult:- " + number + "! = " + number);
    else{
        for(let iter=2; iter<=number; iter++)
            factorial *= iter;
        console.log("\nResult:- " + number + "! = " + factorial);
    }
    
    // Close the readline interface
    rl.close();
});

