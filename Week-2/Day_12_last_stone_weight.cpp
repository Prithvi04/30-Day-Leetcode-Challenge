class Solution {
public:
    //Easisest way to solve the problem is using a MAX heap datastructure

    int lastStoneWeight(vector<int>& stones) {
        //priority_queue is used C++ to impliment Heap,by default max heap in C++(min heap in java)
        priority_queue<int>pq;
        for(int i=0;i<stones.size();i++)
        {
            pq.push(stones[i]);
            
        }
        int x1,x2,x3;
        while(pq.size()>1)
        {
            x1=pq.top();
            pq.pop();
            x2=pq.top();
            pq.pop();
            x3=x1-x2;
            if(x3>0)
                pq.push(x3);
            
        }
        if(pq.size()==0)
            return 0;
        else
        return pq.top();
        
    }
};
