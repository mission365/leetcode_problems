class Solution {
public:
    string answerString(string word, int numFriends) {
        int n = word.length();
        if(numFriends==1){
            return word;
        }
        int rem = n-(numFriends-1);
        string res;
        for(int i=0;i<n;i++){
            int x = min(rem,n-i);
            res = max(res, word.substr(i, x)); 
        }
        return res;
    }
};