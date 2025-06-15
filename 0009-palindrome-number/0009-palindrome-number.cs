public class Solution {
    public bool IsPalindrome(int x) {
        if (x < 0) return false;

        long num = 0;
        int temp = x;

        while (temp != 0) {
            int rem = temp % 10;
            num = num * 10 + rem;
            temp /= 10;
        }

        return num == x;
    }
}
