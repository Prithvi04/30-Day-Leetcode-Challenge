//Brand new Leetcode problem
//solution using O(nlogn) time complexity.
class Solution {
public:
    int countElements(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        //uses a hashmap for storing the elements and count of its duplicates
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
            
        }
        for(int i=1;i<arr.size();i++)
        {
            if(mp.find(arr[i]-1)!=mp.end())
            {
                //if(mp[arr[i]]==mp[arr[i]-1])
                //{
                //counting its previous preceding elements 
                    count+=mp[arr[i]-1];
                    mp.erase(arr[i]-1);
                //}
                //else
               // {
                    //count+=min(mp[arr[i]],mp[arr[i]-1]);
                    //mp.erase(arr[i]-1);
                //}
            }
        }
        
        return count;
        
    }
};