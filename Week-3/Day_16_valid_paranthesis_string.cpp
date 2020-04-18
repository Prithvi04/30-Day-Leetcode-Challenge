class Solution {
public:
    //I solved it using two stacks for opening and * character
    //Can be solved using less auxillary space.
    bool checkValidString(string s) {
        if(s=="")
            return true;
        if(s[0]==')')
            return false;
        stack<int>s1;
        stack<int>s2;
        char ch=' ';
        for(int i=0;i<s.size();i++)
        {
            ch=s[i];
            if(ch=='(')
                s1.push(i);
            else if(ch=='*')
                s2.push(i);
            else if(ch==')')
            {
                if(s1.empty()==false)
                    s1.pop();
                else if(s2.empty()==false)
                    s2.pop();
                else 
                    return false;
            }
        }
        while(s1.empty()==false && s2.empty()==false)
        {
            //Checking if * lies before ), then it can't be balanced
            if(s2.top()<s1.top())
                return false;
                
            s1.pop();
            s2.pop();
            
        }
        return s1.empty();
        
    }
};