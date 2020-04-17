//Anagram based questions are very popular and most asked in coding interveiws

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //Using a hashmap to group similar anagrams
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>s;
        for(string st:strs)
        {
            string s1=st;
            sort(s1.begin(),s1.end());
            mp[s1].push_back(st);
            
        }
        //returning the grouped anagrams in a vector
        for(auto it:mp)
            s.push_back(it.second);
        return s;
            
    }
};
//Possible optimizations in Auxillary space used can be made.