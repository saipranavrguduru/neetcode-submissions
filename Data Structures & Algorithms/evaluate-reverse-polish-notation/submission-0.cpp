class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>vals;
        int a;
        int b;
        for (int i = 0; i < tokens.size(); i++){
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "/" && tokens[i] != "*"){
                vals.push(stoi(tokens[i]));
            }
            else if (tokens[i] == "+"){
                if (!vals.empty()){
                    a = vals.top();
                    vals.pop();
                    b = vals.top();
                    vals.pop();
                    a += b;
                    vals.push(a);
                }
            }
            else if (tokens[i] == "-"){
                if (!vals.empty()){
                    a = vals.top();
                    vals.pop();
                    b = vals.top();
                    vals.pop();
                    vals.push(b-a);
                }
            }
            else if (tokens[i] == "*"){
                if (!vals.empty()){
                    a = vals.top();
                    vals.pop();
                    b = vals.top();
                    vals.pop();
                    a *= b;
                    vals.push(a);
                }
            }
            else if (tokens[i] == "/"){
                if (!vals.empty()){
                    a = vals.top();
                    vals.pop();
                    b = vals.top();
                    vals.pop();
                    vals.push(b/a);
                }
            }
        }
        return vals.top();
    }
};
