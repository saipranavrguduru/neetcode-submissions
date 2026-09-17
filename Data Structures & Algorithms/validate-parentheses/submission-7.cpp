class Solution {
public:
    bool isValid(string s) {
        stack<char> latests;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                latests.push(c);
            }
            else {
                if (latests.empty()) {
                    return false;
                }

                if (c == ')' && latests.top() != '(') {
                    return false;
                }
                if (c == '}' && latests.top() != '{') {
                    return false;
                }
                if (c == ']' && latests.top() != '[') {
                    return false;
                }

                latests.pop();
            }
        }

        return latests.empty();
    }
};
