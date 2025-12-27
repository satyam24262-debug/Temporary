
document.addEventListener("DOMContentLoaded", function () {
    // Button ko pakadna
    let submitBtn = document.querySelector("button");

    // Listener lagana
    submitBtn.addEventListener("click", function (event) {
        event.preventDefault(); // form ko default submit hone se roke

 
        let email = document.getElementById("email").value.trim();
        let phone = document.getElementById("phone").value.trim();

        let emailPattern = /^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-z]{2,}$/;
        if (!emailPattern.test(email)) {
            alert("Error in Email: Please enter a valid email address (name@domain.com).");
            return;
        }

        let phonePattern = /^[0-9]{10}$/;
        if (!phonePattern.test(phone)) {
            alert("Error in Phone: Phone number should contain exactly 10 digits.");
            return;
        }

        alert("Email and Phone are  Submitted Successfully!");
    });
});


