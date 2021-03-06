class FirstUnique {
public:
    unordered_map<int,int>mp;
    queue<int>q;
    FirstUnique(vector<int>& nums) {
        for(int x:nums)
            add(x);
        
    }
    
    int showFirstUnique() {
        while(q.empty()==false && mp[q.front()]>1)
        {
            q.pop();
        }
        if(q.empty()==false)
            return q.front();
        else
            return -1;
        
    }
    
    void add(int value) {
        mp[value]++;
        q.push(value);
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */