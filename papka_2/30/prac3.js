const baseUrl = "https://jsonplaceholder.typicode.com";

const newUser = {
  name: "Name LastName",
  username: "UserName",
  email: "usermail@gmail.com"
};

const requestOptions = {
  method: 'POST',
  headers: {
    'Content-Type': 'application/json'
  },
  body: JSON.stringify(newUser)
};

fetch(`${baseUrl}/users`, requestOptions)
  .then(response => {
    if (!response.ok) {
      throw new Error(`HTTP error! Status: ${response.status}`);
    }
    return response.json();
  })
  .then(createdUser => {
    console.log(createdUser);
  })
  .catch(error => {
    console.error("Error creating user:", error);
  });
