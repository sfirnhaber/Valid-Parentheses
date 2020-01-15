/*
 * Valid Parentheses
 * By Sam Firnhaber
 */

#include <stack>

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (c == '(' || c == '{' || c == '[')
                stack.push(c);
            else if ((c == ')' || c == '}' || c == ']') && !stack.empty()) {
                char c2 = stack.top();
                if (c2 == '(' && c != ')' || (c2 == '[' && c != ']') || (c2 == '{' && c != '}'))
                    return false;
                stack.pop();
            } else
                return false;
        }
        return stack.empty();
    }
};