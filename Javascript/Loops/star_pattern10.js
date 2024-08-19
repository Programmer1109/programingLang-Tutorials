const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask the user for the number
rl.question('Enter No. of Rows.:- ', (input1) => {
    var totalLines = parseFloat(input1);

    console.log("\nThe Pattern:-");
    for(let row = 1; row<=totalLines; row++){
        if (row != totalLines){
            for (let col=1; col<=totalLines-row; col++)
                process.stdout.write(" ");
            for (let col=1; col<=row; col++){
                if (col == 1)
                    process.stdout.write("*");
                else
                    process.stdout.write(" ");
            }
            for (let col=1; col<=row-1; col++)
                if (col == row-1)
                    process.stdout.write("*");
                else
                    process.stdout.write(" ");
        }
        else{
            for (let col=1; col<= totalLines; col++)
                process.stdout.write("*");
            for (let col=1; col<=totalLines-1; col++)
                process.stdout.write("*");
        }
        console.log();
    }
    
    // Close the readline interface
    rl.close();
});
