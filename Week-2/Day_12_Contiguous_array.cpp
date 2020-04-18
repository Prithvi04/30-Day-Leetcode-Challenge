class Solution {
public:
    //Popular coding interveiw problem
    //The idea is to make 0's as -1 and covert the problem into subset sum problem for sum=0.
    int findMaxLength(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                nums[i]=-1;
        }
        //Hashmap used to store first occurance of elements and its index
        unordered_map<int,int>mp;
        int pre_sum=0,res=0;
        for(int i=0;i<nums.size();i++)
        {
            pre_sum+=nums[i];
            //Corner case when prefix sum=0;
            if(pre_sum==0)
                res=i+1;
            if(mp.find(pre_sum)==mp.end())
                mp.insert({pre_sum,i});
            if(mp.find(pre_sum-0)!=mp.end())
                res=max(res,i-mp[pre_sum-0]);
                
        }
        return res;
        
    }
};
