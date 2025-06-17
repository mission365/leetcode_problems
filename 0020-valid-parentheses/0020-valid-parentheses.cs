using System;
using System.Collections.Generic;

public class Solution {
    public bool IsValid(string s) {
        Stack<char> st = new Stack<char>();
        
        for (int i = 0; i < s.Length; i++) {
            char currentChar = s[i];
            
            if (currentChar == '[' || currentChar == '{' || currentChar == '(') {
                st.Push(currentChar);
            } else {
                if (st.Count > 0 && 
                    ((st.Peek() == '(' && currentChar == ')') ||
                     (st.Peek() == '{' && currentChar == '}') ||
                     (st.Peek() == '[' && currentChar == ']'))) {
                    st.Pop();
                } else {
                    return false;
                }
            }
        }
        
        return st.Count == 0;
    }
}
