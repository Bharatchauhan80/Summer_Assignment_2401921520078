class Solution {
public:
    bool isPalindrome(string s) {
        int st =0, end = s.size();
        while(st<end){
        while(st<end && !isalnum(s[st])){
            st++;
        }
          while(st<end && !isalnum(s[end])){
            end--;
        }
        if(tolower(s[st])!=tolower(s[end])){
            return 0;
        }
        st++;
        end--;
        }
        return 1;
    }
};