class Solution {
public:
    string removeOuterParentheses(string s) {
        int flag = 0 ;
        string ans ;
        for (int i=0 ; i<s.size() ; i++) {
            char ch = s[i] ;

            if (ch == '(' && flag++ > 0) {
                ans = ans + ch ;
            }
            if (ch == ')' && flag-- > 1) {
                ans = ans + ch ;
            }
        }
        return ans ;
    }
};