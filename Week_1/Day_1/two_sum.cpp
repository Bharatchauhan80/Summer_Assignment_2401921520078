class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int st = 0, end = nums.size()-1;
        int sum=0;
        vector<pair<int,int>>vec;
        for(int i= 0; i<nums.size(); i++){
            vec.push_back({nums[i],i});
        }
        stable_sort(vec.begin() , vec.end());

        while(st<end){
            sum = vec[st].first +vec[end].first;
            if(sum==target){
              return {vec[st].second , vec[end].second};
            }
            else if (sum>target){
                end--;
            }
            else {
                st++;
            }
            
            
        }
    
       return {};
    }
};