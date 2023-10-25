#pragma once

#include <string>
#include <stack>
using namespace std;
class Solution
{
public: 
    bool IsVail(string s)
    { 
        stack<char> stack;
        int n = s.size();
        for(int i = 0;i < n;i++)
        {
            char c = s[i];
            if(c=='(' || c== '{' || c== '[')
            {
                stack.push(c);
            }

            if(c==')' || c== '}' || c== ']')
            {
                if(c==')' && stack.top()!='(')
                {
                    return false;
                }

                if(c=='}' && stack.top()!='{')
                {
                    return false;
                }

                if(c==']' && stack.top()!='[')
                {
                    return false;
                }

                stack.pop();
            }
        } 
        return true;
    }
};
