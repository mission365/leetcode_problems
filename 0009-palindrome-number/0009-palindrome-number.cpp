class Solution {
public:
    long long num=0;
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long temp =x;
        while(temp!=0){
            int rem = temp%10;
            num = (num*10)+rem;
            temp/=10;
        }
        if(num==x)return true;
        else return false;
    }
};