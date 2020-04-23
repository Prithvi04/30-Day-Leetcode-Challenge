class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        //solution-1-better time complexity
        while(n>m)
            n=n&n-1;
        return m&n;

        //Solution-2
        /*int count=0;
        while(m!=n)
        {
            n>>=1;
            m>>=1;
            count++;
        }
        return m<<count;*/
        
    }
};