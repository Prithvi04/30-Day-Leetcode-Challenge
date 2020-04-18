class Solution {
public:
    //The idea is the equal left shifts and right shifts cancel out and resultant is the same array unchanged
    //The idea is to take the differnce and use the resultant to shift left or right using substring concepts.
    string stringShift(string s, vector<vector<int>>& shift) {
        if(s.length()<=1)
            return s;
        int left=0;
        int right=0;
        string res="";
        
        for(vector<int>v:shift)
        {
            if(v[0]==0)
                left+=v[1];
            else if(v[0]==1)
                right+=v[1];
        }
        
        if(left>right)
        {
            left-=right;
            left%=s.length();
            res+=s.substr(left,s.length()-left);
            res+=s.substr(0,left);
        }
        else if(right>left)
        {
            right-=left;
            right%=s.length();
            res+=s.substr(s.length()-right,right);
            res+=s.substr(0,s.length()-right);
        }
        return res;
    }
};
