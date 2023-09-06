const baseUrl = "https://jsonplaceholder.typicode.com";

function getAlbum(id) {
  return fetch(`${baseUrl}/albums/${id}`)
    .then(response => {
      if (!response.ok) {
        throw new Error(`HTTP error! Status: ${response.status}`);
      }
      return response.json();
    });
}

function getSpecifiedAlbums(ids = []) {
  const promises = ids.map(id => getAlbum(id));
  return Promise.all(promises);
}

getSpecifiedAlbums([1, 15])
  .then(results => {
    console.log("Results: ", results);
  })
  .catch(error => {
    console.log("Error: ", error);
  });
