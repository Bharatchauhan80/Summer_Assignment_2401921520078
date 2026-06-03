class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int st=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                nums[st] = nums[i];
                st++;
            }

        }
        while(st<nums.size()){
            nums[st] = 0;
            st++;
        }
         for(int i= 0;i<nums.size(); i++){
        cout<<nums[i]<<",";
      }
    }
};