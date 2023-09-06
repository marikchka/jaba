const baseUrl = "https://jsonplaceholder.typicode.com";
const userId = 10;

fetch(`${baseUrl}/users/${userId}/albums`)
  .then(response => {
    if (!response.ok) {
      throw new Error(`HTTP error! Status: ${response.status}`);
    }
    return response.json();
  })
  .then(albums => {
    console.log(albums);
  })
  .catch(error => {
    console.error("Error fetching data:", error);
  });
