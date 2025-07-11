using System;

public class Solution {
    public bool JudgeSquareSum(int c) {
        long a = 0;
        long b = (long)Math.Sqrt(c);

        while (a <= b) {
            long res = a * a + b * b;
            if (res == c) {
                return true;
            }
            else if (res < c) {
                a++;
            }
            else {
                b--;
            }
        }

        return false;
    }
}
