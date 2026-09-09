class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                p.push(c);
            } else {
                if (p.empty()) return false;
                char top = p.top();
                p.pop();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return p.empty();
    }
};