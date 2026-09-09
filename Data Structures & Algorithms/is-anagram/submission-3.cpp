class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>smap;
        unordered_map<char,int>tmap;

        for (char a : s){
            smap[a]++;
        }
        for (char b : t){
            tmap[b]++;
        }
        if (smap == tmap){
            return true;
        }
        return false;
    }
};
