const URL = "https://www.googleapis.com/books/v1/volumes?q=harry+potter";
 
const catalogue = document.querySelector(".catalogue");

const book1 = catalogue.querySelector("table").querySelector("#book1")
const book2 = catalogue.querySelector("table").querySelector("#book2")
const book3 = catalogue.querySelector("table").querySelector("#book3")
const book4 = catalogue.querySelector("table").querySelector("#book4")
const book5 = catalogue.querySelector("table").querySelector("#book5")

async function getBookData(){
response = await fetch(URL);
data = await response.json();
console.log(data)

const imgsrc1 = book1.querySelector("#img1").querySelector("img")
const imgsrc2 = book2.querySelector("#img2").querySelector("img")
const imgsrc3 = book3.querySelector("#img3").querySelector("img")
const imgsrc4 = book4.querySelector("#img4").querySelector("img")
const imgsrc5 = book5.querySelector("#img5").querySelector("img")

imgsrc1.src = data.items[0].volumeInfo.imageLinks.thumbnail;
imgsrc2.src = data.items[2].volumeInfo.imageLinks.thumbnail;
imgsrc3.src = data.items[3].volumeInfo.imageLinks.thumbnail;
imgsrc4.src = data.items[4].volumeInfo.imageLinks.thumbnail;
imgsrc5.src = data.items[5].volumeInfo.imageLinks.thumbnail;

const author1 = book1.querySelector("#author1");
const author2 = book2.querySelector("#author2");
const author3 = book3.querySelector("#author3");
const author4 = book4.querySelector("#author4");
const author5 = book5.querySelector("#author5");

author1.innerText = data.items[0].volumeInfo.authors[0];
author2.innerText = data.items[2].volumeInfo.authors[0];
author3.innerText = data.items[3].volumeInfo.authors[0];
author4.innerText = data.items[4].volumeInfo.authors[0];
author5.innerText = data.items[5].volumeInfo.authors[0];


const publisher1 = book1.querySelector("#publisher1");
const publisher2 = book2.querySelector("#publisher2");
const publisher3 = book3.querySelector("#publisher3");
const publisher4 = book4.querySelector("#publisher4");
const publisher5 = book5.querySelector("#publisher5");

publisher1.innerText = data.items[1].volumeInfo.publisher;
publisher2.innerText = data.items[2].volumeInfo.publisher;
publisher3.innerText = data.items[3].volumeInfo.publisher;
publisher4.innerText = data.items[4].volumeInfo.publisher;
publisher5.innerText = data.items[5].volumeInfo.publisher;


}
getBookData()