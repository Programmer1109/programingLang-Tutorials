const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask the user for the number
rl.question('Enter No. of Rows.:- ', (input1) => {
    var totalRows = parseFloat(input1);

    console.log("\nThe Pattern:-");
    for(let row = 1; row<=totalRows; row++){
        for(let col=1; col<=totalRows-row; col++)
            process.stdout.write(" ");
        for(let col=1; col<=row; col++)
            process.stdout.write("*");
        console.log();
    }
    
    // Close the readline interface
    rl.close();
});

