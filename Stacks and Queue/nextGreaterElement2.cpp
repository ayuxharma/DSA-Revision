#include <vector>
#include <stack>

using namespace std;

vector<int> nextGreaterElementII(vector<int>& a) {
    int n = a.size();
    vector<int> ans(n, -1); // Initialize all elements to -1
    stack<int> st; // Stack to store indices

    // Loop through the array twice to handle the circular nature
    for (int i = 0; i < 2 * n; i++) {
        // We use modulo to wrap around the array
        int current = a[i % n];
        
        // While there are elements in the stack and the current element is greater
        // than the element indexed at the top of the stack
        while (!st.empty() && a[st.top()] < current) {
            ans[st.top()] = current; // Update the answer for that element
            st.pop(); // Remove it as we've found the NGE
        }

        // Only push indices of the first round to avoid overwriting correct answers
        if (i < n) {
            st.push(i); // Push index of the current element
        }
    }

    return ans;
}