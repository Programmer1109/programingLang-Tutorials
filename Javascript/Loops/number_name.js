const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function countDigits(temp){
    var Digit;
    if (temp <= 9) 
        Digit = 1;
    else{
        Digit = 0;
        while(temp){
            Digit++;
            //console.log("Digits = " + Digit + "\tnum = " + temp);
            temp = Math.floor(temp/10);
        }
    }
    return Digit;
}

function print_numberName(digit){
    switch(digit){
        case 0:
            process.stdout.write("Zero ");
            break;
        case 1:
            process.stdout.write("One ");
            break;
        case 2:
            process.stdout.write("Two ");
            break;
        case 3: 
            process.stdout.write("Three ");
            break;
        case 4:
            process.stdout.write("Four ");
            break;
        case 5:
            process.stdout.write("Five ");
            break;
        case 6:
            process.stdout.write("Six ");
            break;
        case 7:
            process.stdout.write("Seven ");
            break;
        case 8:
            process.stdout.write("Eight ");
            break;
        case 9:
            process.stdout.write("Nine ");
            break;    
    }    
}

// Ask the user for the number
rl.question('Enter a No.:- ', (input1) => {
    var number = parseFloat(input1);
    var digits = 0;

    let temporary = number;

    if(temporary >= 0)
        temporary = number;
    else
        temporary = -1 * number; 

    digits = countDigits(temporary);
    //console.log(digits);
    //console.log(number);

    if (digits == 1){
        print_numberName(temporary);
    }
    else{
        let i = 1;
        while(i <= digits){
            let quotient, divisor;
            divisor = Math.pow(10, digits-i);
            quotient = Math.floor(temporary/divisor);
            temporary -= divisor * quotient;
            print_numberName(quotient);
            //console.log("Q = " + quotient + "\tD = " + divisor + "\t R = " + temporary); 
            i++;
        }
    }
    
    rl.close();
});

