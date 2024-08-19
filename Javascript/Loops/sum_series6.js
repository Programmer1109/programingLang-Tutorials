const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask the user for the number
rl.question('Enter No. of terms:- ', (input1) => {
    var terms = parseFloat(input1);
    
        var sum = 0;
        
        for (let loopVar=0; loopVar<terms; loopVar++){
            let temp = 0;
            console.log("Iteraiton "+loopVar+":-");
            for (let iter = 0; iter<=loopVar; iter++)
                temp += 2 * Math.pow(10, iter);
            console.log("temp = "+temp);
            sum += temp;
            console.log("Sum = "+sum);
        }


        console.log("Result:- Sum = " + sum.toFixed(3));
        // Close the readline interface
        rl.close();
});

