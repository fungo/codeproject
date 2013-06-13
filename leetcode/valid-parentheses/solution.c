#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

bool isValid(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        char * cs = (char *)s.c_str();
        if(*cs == '\0') return true;
        int length = s.length();
        char *p, *q;
        p = q = cs;
        while(*q != '\0')
        {
            if(*q == '(' || *q == '[' || *q == '{')
                {
                    *p++ = *q++;
                }
            else if( p == cs)
            {
                return false;
            }
            else if( (*(p-1) == '{' && *q == '}') || (*(p-1) == '[' && *q == ']') || (*(p-1) == '(' && *q == ')'))
            {
                p--;
                q++;
            }
            else
                return false;
        }
        
        return p == cs ? true : false;
}


int
main()
{
    string s = "{{}}{}";
    printf(isValid(s) ? "Yes\n" : "No\n");
    return 0;
}
