const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask the user for the first number
rl.question('Enter start index: ', (input1) => {
    var start = parseFloat(input1);
    
    // Ask the user for the second number
    rl.question('Enter last index: ', (input2) => {
        var last = parseFloat(input2);
        
        // Compare the numbers and display the result
        if (start < last){
            console.log("Printing in Ascending Order...");
            console.log("\nResult:- \n");
            for(let iter = start; iter<=last; iter++)
                console.log(iter);
        } 
        else if (start > last){
            console.log("Printing in Descending Order...");
            console.log("\nResult:- \n");
            for(let iter = start; iter>=last; iter--)
                console.log(iter);
        }
        else
            console.log("\nResult:- " + start);
        
        // Close the readline interface
        rl.close();
    });
});
