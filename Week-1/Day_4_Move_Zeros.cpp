class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //Solution with best time and space complexity O(n) and O(1) respectively
        
        int k=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums[k]=nums[i];
                k++;
            }
            else
                count++;
        }
        for(int i=k;i<nums.size();i++)
        {
            nums[i]=0;
        }
            
        
    }
};