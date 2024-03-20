alert("alert !");
var h1=document.getElementsByTagName("h1"); 
console.log(h1);


var title=document.getElementById("title").style.color="red";
document.getElementById("title").style.removeProperty("color");
console.log(title);

var child=document.getElementsByClassName("child");
console.log(child[1]);

var img=document.getElementById("img");
console.log(img.getAttribute("src"));
img.setAttribute("alt","Profile Picture");
img.classList.add("testClass");
console.log(img);


var hero=document.getElementById("hero");
console.log(hero.innerText);


var input=document.getElementById("input");
console.log(input.value);

var parent=document.getElementById("parent").innerHTML;
console.log(parent);

var testDiv=document.getElementsByClassName("test");
console.log(testDiv[0].childNodes[1].parentNode.parentNode.parentNode);


var newDiv=document.getElementById("newDiv");
var p=document.createElement("p");
p.innerText="notun ami";
newDiv.appendChild(p);


document.getElementById("submit_btn").addEventListener("click" ,function(e)
{var inputValue=document.getElementById("input").value;
 console.log(inputValue);
});

document.getElementById("input").addEventListener("blur",function(e)
{
 console.log(e.target.value);
});










