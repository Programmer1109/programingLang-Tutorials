const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask the user for the number
rl.question('Enter a No.:- ', (input1) => {
    var number = parseFloat(input1);
    var reverseNum = 0;

    let temporary = number;

    if(temporary >= 0)
        temporary = number;
    else
        temporary = -1 * number; 

    //console.log(digits);
    //console.log(number);

    process.stdout.write("\nReverse Number = ");
    while(temporary){
        let remainder;
        remainder = temporary%10;
        reverseNum = reverseNum*10 + remainder;
        temporary = Math.floor(temporary/10); 
        console.log("New No. = " + reverseNum + "\t R = " + remainder + "\tTemp = " + temporary); 
    }
    console.log(reverseNum);

    rl.close();
});

