class Solution {
public:
    bool isPalindrome(string s) {
        std::erase_if(s, [](unsigned char c) {return !std::isalnum(c);});
        for (char& c : s) {
            c = std::tolower(static_cast<unsigned char>(c));
        }
        int k = 0;
        int r = s.size() -1;
        while (k<r){
            if (s[k] != s[r]){
                return false;
            }
            k++;
            r--;
        }
        cout << s;
        return true;
        }
};
