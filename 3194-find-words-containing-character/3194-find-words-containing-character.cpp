class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int  p =0;
        vector<int> ans;
        for(auto it: words){
            string s = it;
            if(s.find(x)!= string::npos){
                ans.push_back(p);
            }
            p+=1;
        }
        return ans;
    }
};