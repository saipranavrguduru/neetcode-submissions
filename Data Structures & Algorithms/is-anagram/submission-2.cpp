class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>s_anagrams;
        unordered_map<char, int>t_anagrams;
        for (char x : s){
            s_anagrams[x]++;
        }
        for (char y : t){
            t_anagrams[y]++;
        }
        return (s_anagrams == t_anagrams);
    }
};
