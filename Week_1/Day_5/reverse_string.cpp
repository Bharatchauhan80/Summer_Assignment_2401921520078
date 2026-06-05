class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0, end=s.size()-1;
        while(st<end){
            swap(s[st],s[end]);
            st++;
            end--;
        }
        for(int i =0; i<s.size(); i++){
            cout<<s[i] << ",";
        }
    }
};