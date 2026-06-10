class Solution {
public:
    int strStr(string haystack, string needle) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n = haystack.length();
        int m = needle.length();
        
        if (m == 0) return 0;
        if (n < m) return -1;
        
        for (int i = 0; i <= n - m; ++i) {
            if (haystack.compare(i, m, needle) == 0) {
                return i;
            }
        }
        
        return -1;
    }
};