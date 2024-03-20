

var number="this is a number";
console.log(typeof number);
var n1=55.5;
var n2=20;
var result=n1+n2;

// natural number with converter
console.log(parseInt(result));

// natural number with converter for addition
var n3="55";
var n4=20;
console.log(parseInt(n3)+n4);

var n5="55.555";
var n6=20;
console.log(parseFloat(n3).toFixed(2)+n4);


// if & else
var weather="hot";

if (weather=="hot"){
console.log("ami bahire jabo");
}
else if (weather=="rain"){
    console.log("need umbrella");
}
else{
console.log("ami bahire jabo na");
}



// Object

var person={
    hands:2,
    friends:5,
    age:15,
}

console.log(Object.keys(person));
console.log(Object.values(person));
console.log(Object.entries(person));



// Object

var person={
    hands:2,
    friends:5,
    age:15,
    college:{
        name:"bogra govt college",
        location:"bogra",
    
    }
}

console.log(person.college.location);


// Array
var friends=["rahim","korim","jobber"];
console.log(friends(0));
console.log(friends.length);
friends.push("salam");
// firstly undex setp
friends.unshift("salam");
//  given output 2 indext to befor 4 index
console.log(friends.slice(2,4));
console.log(friends.indexOf("rahim"));





