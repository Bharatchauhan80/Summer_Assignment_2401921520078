class Solution {
public:
    bool isSubsequence(string s, string t) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int s_idx = 0;
        int t_idx = 0;
        int s_len = s.length();
        int t_len = t.length();
        
        while (s_idx < s_len && t_idx < t_len) {
            if (s[s_idx] == t[t_idx]) {
                s_idx++;
            }
            t_idx++;
        }
        
        return s_idx == s_len;
    }
};