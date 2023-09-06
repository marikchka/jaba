const baseUrl = "https://jsonplaceholder.typicode.com";

fetch(`${baseUrl}/users`)
  .then(response => response.json())
  .then(users => {
    console.log(users);
  })
  .catch(error => {
    console.error("Error fetching data:", error);
  });
