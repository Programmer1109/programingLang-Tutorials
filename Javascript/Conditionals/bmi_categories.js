const readline = require('readline');
const { compileFunction } = require('vm');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask the user for the first number
rl.question('Enter your weight (in Kg): ', (input1) => {
    var weight = parseFloat(input1);
    
    // Ask the user for the second number
    rl.question('Enter your height (in m): ', (input2) => {
        var height = parseFloat(input2);
        
        var BMI = weight/(height*height);
        var category;
        // Compare the numbers and display the result
        if (BMI <= 14.0)
            category = "SEVERELY UNDERWEIGHT";
        else if (BMI <= 18.0)
            category = "UNDERWEIGHT";
        else if (BMI <=25.0)
            category = "HEALTHY";
        else if (BMI <= 30.0)
            category = "OVERWEIGHT";
        else
            category = "OBESE";
    
        console.log("\nBMI = " + BMI.toFixed(3)); 
        console.log("\nResult:- " + category + "!!!");

        // Close the readline interface
        rl.close();
    });
});
