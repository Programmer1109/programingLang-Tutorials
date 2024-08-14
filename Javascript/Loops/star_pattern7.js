const { write } = require('fs');
const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask the user for the number
rl.question('Enter No. of Lines.:- ', (input1) => {
    var totalLines = parseFloat(input1);

    console.log("\nThe Pattern:-");
    for(let row = 1; row<=totalLines; row++){
        for(let col=1; col<=totalLines; col++){
            if(row == 1 || row == totalLines)
                process.stdout.write("*");
            else{
                if(col == 1 || col == totalLines || col == row)
                    process.stdout.write("*");
                else
                    process.stdout.write(" ");
            }
        }
        process.stdout.write("\n");
    }
    
    // Close the readline interface
    rl.close();

});
