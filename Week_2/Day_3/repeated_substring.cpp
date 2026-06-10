class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        string doubled = s + s;
        return doubled.find(s, 1) != s.length();
    }
};