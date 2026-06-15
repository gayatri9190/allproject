function addToCart(name, price,image) {

  let cart = JSON.parse(localStorage.getItem("cart")) || [];

  cart.push({ name: name, price: price,image:image});

  localStorage.setItem("cart", JSON.stringify(cart));

  alert("Added to cart!");
}

function displayCart() {

  let cart = JSON.parse(localStorage.getItem("cart")) || [];
  let cartContainer = document.getElementById("cart-items");
  let total = 0;
  
  if (!cartContainer) return;

  cartContainer.innerHTML = "";

  cart.forEach((item, index) => {

    total += item.price;

    cartContainer.innerHTML += `
      <div class="card">
     
                <img src="${item.image}" width="100" >
                <div>
        <h3>${item.name}</h3>
        <p>₹${item.price}</p>

        <button onclick="removeItem(${index})" class="btn">Remove</button>
      </div>
      </div>
  `;
  });

  document.getElementById("total").innerText = "Total: ₹" + total;
}

function removeItem(index) {

  let cart = JSON.parse(localStorage.getItem("cart")) || [];

  cart.splice(index, 1);

  localStorage.setItem("cart", JSON.stringify(cart));

  displayCart();
}

displayCart();

document.addEventListener("DOMContentLoaded", function() {

  const body = document.body;
  const toggleBtn = document.getElementById("themeToggle");

  const savedTheme = localStorage.getItem("theme");

  if (savedTheme === "dark") {
    body.classList.add("dark-mode");
    toggleBtn.textContent = "☀";
    toggleBtn.classList.add("sun");
    toggleBtn.classList.remove("moon");
  } else {
    toggleBtn.classList.add("moon");
  }

  toggleBtn.addEventListener("click", function() {

    body.classList.toggle("dark-mode");

    if (body.classList.contains("dark-mode")) {
      toggleBtn.textContent = "☀";
      toggleBtn.classList.add("sun");
      toggleBtn.classList.remove("moon");
      localStorage.setItem("theme", "dark");
    } else {
      toggleBtn.textContent = "🌙";
      toggleBtn.classList.add("moon");
      toggleBtn.classList.remove("sun");
      localStorage.setItem("theme", "light");
    }

  });

});
function buyNow(name, price) {

  const product = {
    name: name,
    price: price
  };

  localStorage.setItem("buyNowItem", JSON.stringify(product));

  window.location.href = "checkout.html";
}
