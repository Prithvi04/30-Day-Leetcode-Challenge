class Solution {
public:
    //Using kadane's Algorithm is the best in this case as it has O(n) int time and constant auxillary space
    //Popular problems asked in Coding interveiws 
    int maxSubArray(vector<int>& nums) {
        //Simple Code: My approach
        int c=0, maxsum=INT_MIN;
        for(int i:nums)
        {
            c=c+i;
            maxsum=max(maxsum,c);
            c=max(0,c);
        }
        return maxsum;

//CODE WITH MORE DETAILED OUTPUT , CAN GIVE STARTING AND ENDING INDEX OF SUBARRAY ALONG WITH MAXSUM
        
    /*int max_so_far = INT_MIN, max_ending_here = 0, start =0, end = 0, s=0; 
  
    for (int i=0; i< nums.size(); i++ ) 
    { 
        max_ending_here += nums[i]; 
  
        if (max_so_far < max_ending_here) 
        { 
            max_so_far = max_ending_here; 
            start = s; 
            end = i; 
        } 
  
        if (max_ending_here < 0) 
        { 
            max_ending_here = 0; 
            s = i + 1; 
        }
    }
        return max_so_far;*/
    }
        
};
