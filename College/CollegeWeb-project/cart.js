// const titles = [
//   "wings of fire",
//   "the alchemist",
//   "rich dad poor dad",
//   "atomic habits",
//   "think and grow rich"
// ];

const URL = "https://www.googleapis.com/books/v1/volumes?q=";

const input = document.querySelector(".input input");
const bookName = document.querySelector(".bookDetail  #bookName");
const price = document.querySelector(".bookDetail  #price");
const amount = document.querySelector(".bookDetail  #amount");
const quantity = document.querySelector(".bookDetail  #quantity");
const btn = document.querySelector(".btn button");
const img = document.querySelector(".container img");


// console.log(img.src);
// console.log(quantity);
// console.log(input);

// input.addEventListener("change", function(){
//   let i = input.value;
//   console.log(i);
// })


btn.addEventListener("click", async(evt)=>{
  evt.preventDefault();
  let DATA = input.value;
  const query = encodeURIComponent(DATA);
  const BASE_URL = `${URL}${query}`;
  bookData(BASE_URL);


});

const bookData = async(BASE_URL)=>{
  const response = await fetch(BASE_URL);
  const data = await response.json();


  console.log(data);
  // console.log(data.items[1].volumeInfo.title);


  bookName.innerHTML = data.items[1].volumeInfo.title;
  const newSrc = data.items[1].volumeInfo.imageLinks.smallThumbnail;
  img.src = newSrc;
  price.innerHTML = "$"+`${data.items[1].saleInfo.listPrice.amount}`;
  amount.innerHTML = "$"+data.items[1].saleInfo.listPrice.amount*quantity.value;

}


function addToCart(bookName) {
  alert(bookName + " added to cart!");
  // You can later integrate this with actual cart logic or backend
}