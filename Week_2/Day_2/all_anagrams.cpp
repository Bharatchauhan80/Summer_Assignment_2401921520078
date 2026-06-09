
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if (p.length() > s.length()) return {};
        
        vector<int> p_count(26, 0);
        vector<int> s_count(26, 0);
        vector<int> res;
        
        for (int i = 0; i < p.length(); ++i) {
            p_count[p[i] - 'a']++;
            s_count[s[i] - 'a']++;
        }
        
        if (s_count == p_count) res.push_back(0);
        
        int left = 0;
        for (int right = p.length(); right < s.length(); ++right) {
            s_count[s[right] - 'a']++;
            s_count[s[left] - 'a']--;
            left++;
            
            if (s_count == p_count) {
                res.push_back(left);
            }
        }
        
        return res;
    }
};