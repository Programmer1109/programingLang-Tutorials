const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask the user for the number
rl.question('Enter a No.:- ', (input1) => {
    var number = parseFloat(input1);
    var digits = 0;

    // Compare the numbers and display the result
    if (number <= 9 && number >= -9) 
        digits = 1;
    else{
        let temp = number;
        if (number >= 0)
            temp = number;
        else 
            temp = -1 * number;
        while(temp){
            digits++;
            console.log("Digits = " + digits + "\tNumber = " + temp);
            temp = Math.floor(temp/10);
        }
    }
    
    // Close the readline interface
    console.log("\ndigits =  " + digits);
    rl.close();
});

