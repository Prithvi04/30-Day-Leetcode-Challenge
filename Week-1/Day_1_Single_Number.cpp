class Solution {
public:
    int singleNumber(vector<int>& nums) {
    	//code basically uses the concept of XOR for cancelling out repeated terms
        int res=nums[0];
        for(int i=1;i<nums.size();i++)
            res=res^nums[i];
        return res;
        
    }
};