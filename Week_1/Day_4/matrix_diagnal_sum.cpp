class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
     int total_sum =0 , primary_sum =0 , secondary_sum=0;
     for(int i =0; i<mat.size(); i++){
        primary_sum += mat[i][i];
        if(i!=mat.size()-i-1){
            secondary_sum += mat[i][mat.size()-i-1];
        }
        total_sum = primary_sum + secondary_sum;
     }
     return total_sum;
    }
};