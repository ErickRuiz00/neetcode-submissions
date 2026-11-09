class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) 
            return false;
        
        std::unordered_map<char, int> elements = {};
        for(auto& c : s) {
            elements[c]++;
        }

        for(auto& c : t) {
            elements[c]--;
            if (elements[c] < 0) 
                return false;
        }

        return true;
    }
};
