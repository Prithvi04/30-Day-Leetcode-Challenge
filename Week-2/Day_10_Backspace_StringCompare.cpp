class Solution {
public:
    //Simple String manipulation and Comparison problem using O(n) time and O(1) auxillary space.
    bool backspaceCompare(string S, string T) {
        int k=0,p=0;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]=='#')
            {
                k--;
                k=max(k,0);
            }
            else
            {
                S[k]=S[i];
                k++;
            }
        }
        for(int i=0;i<T.size();i++)
        {
            if(T[i]=='#')
            {
                p--;
                p=max(p,0);
            }
            else
            {
                T[p]=T[i];
                p++;
            }
        }
        if(k!=p)
            return false;
        else
        {
            for(int i=0;i<k;i++)
            {
                if(S[i]!=T[i])
                    return false;
            }
            return true;
        }
        
    }
};
