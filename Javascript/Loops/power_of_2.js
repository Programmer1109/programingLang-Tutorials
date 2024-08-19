const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask the user for the number
rl.question('Enter a No.:- ', (input1) => {
    var number = parseFloat(input1);
    
    
    if (number == 1)
        console.log("\nResult:- 1 is a power of 2.\n");
    else{
        let temp = number;
        let i = 0;
        while(temp>=2){
            let remainder;
            remainder = temp%2;
            if(remainder == 1)
                break;
            else
                temp = Math.floor(temp/2);
            i++;
        }
        
        if(temp == 1)
            console.log("\nResult:- " + number + " is a power of 2.\n");
        else
            console.log("\nResult:- " + number + " is not a power of 2.\n");
    }
    
    rl.close();
});

