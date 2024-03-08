// #include <stack>
// #include <string>

// class Solution {
// public:
//     string reverseWords(string s) {
//         stack<string> st;
//         string ans = "", temp = "";
        
//         for (char ch : s) {
//             if (ch != ' ') {
//                 temp += ch;
//             } else if (!temp.empty()) { // if temp is not empty, push it into stack
//                 st.push(temp);
//                 temp = "";
//             }
//         }
        
//         if (!temp.empty()) // Handling the last word
//             st.push(temp);

//         while (!st.empty()) {
//             ans += st.top();
//             st.pop();
//             if (!st.empty())
//                 ans += " ";
//         }
        
//         return ans;
//     }
// };


// APPROACH 2 (OPTIMIZED)
#include <string>

class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right = s.length() - 1;

        string temp = "";
        string ans = "";

        while (left <= right) {
            char ch = s[left];

            if (ch != ' ') {
                temp = temp + ch;
            } else { // encountered a space
                if (!temp.empty()) { // if temp is not empty, append it to ans
                    if (!ans.empty()) {
                        ans = temp + " " + ans;
                    } else {
                        ans = temp;
                    }
                    temp = ""; // reset temp
                }
            }
            left++;
        }

        if (!temp.empty()) { // handle the last word
            if (!ans.empty()) {
                ans = temp + " " + ans;
            } else {
                ans = temp;
            }
        }

        return ans;
    }
};
