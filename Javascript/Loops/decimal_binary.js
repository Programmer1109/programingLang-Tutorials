const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function exponentiation(base, power){
    if (power == 0)
        return 1;
    else if (power == 1)
        return base;
    else{
        var result = 1;
        for(let iter=1; iter<=power; iter++)
            result *= base;
        return result;
    }
}

// Ask the user for the number
rl.question('Enter a No.:- ', (input1) => {
    var number = parseFloat(input1);
    var binary = 0;
    
    if (number < 0){
        console.log("Error:- Conversion to binary not possilbe for negative number!!!");
    }
    else if (number == 0 || number == 1)
        console.log("Binary Equivalent = " + number);
    else{
        let temp = number;
        for (let i = 0; temp>0; i++){
            let remainder;
            remainder = temp%2;
            binary = binary + remainder * exponentiation(10, i);
            temp = Math.floor(temp/2);
        }
        console.log("Binary Equivalent = " + binary);
    }
    
    rl.close();
});

