#include <vector>

// Function to count the number of elements in 'arr' that are greater than the element at each index specified in 'query'
vector<int> countGreater(vector<int> &arr, vector<int> &query) {
  // Get the number of queries to process
  int q = query.size();

  // Get the number of elements in the array
  int n = arr.size();

  // Vector to store the results for each query
  vector<int> ans;

  // Loop through each query
  for (int i = 0; i < q; i++) {
    // Initialize counter for the number of elements greater than the current query element
    int temp = 0;

    // Get the index from the query
    int qi = query[i];

    // Compare every element in 'arr' starting from the index 'qi' to the end of 'arr'
    for (int j = qi; j < n; j++) {
      // If an element is greater than the element at index 'qi' in 'arr', increase the counter
      if (arr[j] > arr[qi]) {
        temp++;
      }
    }

    // Append the count to the result vector
    ans.push_back(temp);
  }

  // Return the results
  return ans;
}
