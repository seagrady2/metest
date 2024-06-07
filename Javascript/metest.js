
fetch('http://jsonplaceholder.typicode.com/users', { 
  method: 'GET'
})
.then(function(response) { return response.json(); })
.then(function(json) {
  // use the json
});