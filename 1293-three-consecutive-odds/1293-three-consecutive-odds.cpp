class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int a=0,b=1,c=2;
        while(c<arr.size()){
            if(arr[a]%2==1 && arr[b]%2==1 && arr[c]%2==1){
                return true;
            }
            a++;
            b++;
            c++;
        }
        return false;
    }
};