class Solution {
public:
    //classical hashmap problem,most asked in coding interviews
    int subarraySum(vector<int>& nums, int k) {
        int pre_sum=0,res=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            pre_sum+=nums[i];
            if(pre_sum==k)
                res++;
            if(mp.find(pre_sum-k)!=mp.end())
                res+=mp[pre_sum-k];
             mp[pre_sum]++;   
        }
            
        return res;
        
    }
};