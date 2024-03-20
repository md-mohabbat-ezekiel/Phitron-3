// function name(params)
// {
//    if(true){
//          const x="Hello";
//          console.log(x);        
//     }
//     console.log(x);
// }

const test="World";
const name="hello ${test}";
console.log(name);
const num=[1,2,3,4,5,6,7,8,9,10,11];
const newArray=["rahim","karim", ...num];

// console.log(newArray);
console.log(Math.max(...num));

function test(){
   return "Hello World";
}

const result1=test();
console.log(result);
const test2=()=>2*2;
console.log(test2());

const test3=()=>{
    console.log("yes boss");
    return "broo";
};

console.log(test3());


const numbers=[1,2,3,4,5,6,7];
const[second,first,b,c]=numbers;
const obj={
   name:"Gias",
   age:"7",
   friends:10,
   github:"yes",
   status:"single",
}


// const age=obj.age;
// const name=obj.name;

const{age,status}=obj;
console.log(age,status);


const test=[{
   name:"Gias",
   age:"7",
   friends:10,
   github:"yes",
   status:"single",
},
{},
{},
];

console.log(test[0].friends);


// const nums=[2,2];
// let temp=[];

// for (let i=0;i<nums.length;i++)
// {
//   const element =nums[i];
//   const square =element*element;
//   temp.push(square);
// }
// console.log(temp);

const squre =nums.map(x=>x*x);
console.log(squre);

const products=[
   {id: 1,name:"apple",price:500,color:golden},
   {id: 2,name:"xiaomi",price:350,color:black},
   {id: 3,name:"sumsung",price:300,color:black},
   {id: 4,name:"lenova",price:100,color:golden},
];

const result =products.filter((pd)=>pd.color =="balck");
console.log(result);
const result2=products.find((pd)=>pd.color=="black");


const productContainer=document.getElementById("product-container");
const result3=products.forEach((product)=>{
   console.log(product);
   const h1=document.createElement("h1");
   h1.innerText=product.name;
   productContainer.appendChild(h1);
});



fetch("https://fakestoreapi.com/products/1")
    .then((res)=>res.json())
    .then((data)=>{
      console.log(data);
    });


    
const getData=new Promise(function(resolve,reject)
{
   return resolve(20);
});

getData.then(data=>console.log(data));