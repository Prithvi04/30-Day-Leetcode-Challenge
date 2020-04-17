class Solution {
public:
    int hello(int n)
    {
        int res=0;
        //uses a while loop for a single operation
        while(n>0)
        {
            res+=pow((n%10),2);
            n=n/10;
        }
        return res;
            
    }
    bool isHappy(int n) {
        unorderd_set<int>s;
        s.insert(n);
        
        while(1)
        {
            if(n==1)
                return true;
            
            n=hello(n);
            //uses a hashset to check for preveious occurances
            if(s.find(n)!=s.end())
                return false;
            
            s.insert(n);
                
        }
        return false;
    }
};