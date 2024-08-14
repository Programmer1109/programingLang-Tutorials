var currentTime = new Date();
var currentHour = currentTime.getHours();
var greeting;

if (currentHour < 12) {
    greeting = "Good morning";
    console.log("It's " + currentHour + " AM, " + greeting + "!");
} 
else if (currentHour < 18) {
    greeting = "Good afternoon";
    console.log("It's " + currentHour + " PM, " + greeting + "!");
} 
else {
    greeting = "Good evening";
    console.log("It's " + currentHour + " PM, " + greeting + "!");
}