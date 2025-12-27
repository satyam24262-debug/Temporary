
document.addEventListener("DOMContentLoaded", function () {
    let submitBtn = document.querySelector("button");

    submitBtn.addEventListener("click", function (event) {
        event.preventDefault(); // form ko default submit hone se roke

        let name = document.getElementById("name").value.trim();
        let password = document.getElementById("password").value.trim();

        let namePattern = /^[A-Za-z]+$/;
        if (!namePattern.test(name) || name.length < 6) {
            alert("Error in Name: Name should contain only alphabets and must be at least 6 characters long.");
            return ;
        }

        if (password.length < 6) {
            alert("Error in Password: Password should not be less than 6 characters.");
            return ;
        }

        alert("Password and Name are Submitted Successfully!");
    });
});