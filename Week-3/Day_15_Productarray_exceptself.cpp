class Solution {
public:
    //Interesting problem, PS: don't solve it using division as it fails some corner cases
    //The idea is to compute product before and after an element in array using pre and post
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> v(nums.size(),1);
        int pre=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            v[i]=pre;
            pre=pre*nums[i];
        }
        int post=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--)
        {
            v[i]=v[i]*post;
            post=post*nums[i];
        }
        return v;

        
    }
};