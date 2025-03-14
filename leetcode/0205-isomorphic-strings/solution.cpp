class Solution {
public:

bool isIsomorphic(string s, string t) {
    if (s.length() != t.length()) return false;

    unordered_map<char, char> mapS, mapT;

    for (int i = 0; i < s.length(); i++) {
        char sChar = s[i], tChar = t[i];

        if (mapS.find(sChar) != mapS.end()) {
            if (mapS[sChar] != tChar) return false;
        } else {
            mapS[sChar] = tChar;
        }

        if (mapT.find(tChar) != mapT.end()) {
            if (mapT[tChar] != sChar) return false;
        } else {
            mapT[tChar] = sChar;
        }
    }
    
    return true;

    }

};
