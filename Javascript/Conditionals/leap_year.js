const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask the user for the year
rl.question('Enter the year: ', (input1) => {
    var year = parseFloat(input1);
    
    // Compare the years and display the result
    if (year%100 == 0){ 
        if (year%400 == 0)
            console.log("\nResult:- " + year + " is a leap year as well as a century year.\n");
        else
            console.log("\nResult:- " + year + " is not a leap year rather a century year.\n");        
    }
    else{
        if (year%4 == 0)
            console.log("\nResult:- " + year + " is a leap year.\n");
        else
            console.log("\nResult:- " + year + " is not a leap.\n");
    }
    // Close the readline interface
    rl.close();
});

