class Solution {
public:
    //Consider 1st and last element of array traverse in comparison  with those elements
    //O(logn) solution, where as naive would be O(N).
    int search(vector<int>& nums, int target) {
        if(nums.size()==0)
            return -1;
        int n1=nums[0],x1=0;
        int n2=nums[nums.size()-1],x2=nums.size()-1;
        int found=-1;
        if(target==n1)
            return 0;
        else if(target==n2)
            return nums.size()-1;
        else if(target<n2)
        {
            while(x2-1>=0 && nums[x2-1]<nums[x2])
            {
                if(target==nums[x2-1])
                {
                    found=x2-1;
                    return found;
                }
                    
                x2=x2-1;
            }
            found=-1;
        }
        else if(target>n1)
        {
            while(x1+1<nums.size() && nums[x1+1]>nums[x1])
            {
                if(target==nums[x1+1])
                {
                    found=x1+1;
                    return found;
                }
                x1=x1+1;
            }
            found=-1;
        }
        return -1;
    }
};