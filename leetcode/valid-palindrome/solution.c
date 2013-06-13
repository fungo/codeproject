#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;


bool isPalindrome(string s) {
    char *cs = (char *)s.c_str();
    char *start, *end;
    start = end = cs;
    while(*end) end++;
    end--;
    while(start < end)
    {
        while(start < end && !isalnum(*start))
            start++;
        while(start < end && !isalnum(*end))
            end--;
        if(start <= end && (*start == *end || abs(*start - *end) == 32))
            {
                //printf("start: %c, end %c\n", *start, *end);
                start++;
                end--;
            }
        else return false;
    }
    return true;
}
int
main()
{
    char s[100] = "race a car";
    //while(scanf("%s", s) != EOF)
        printf(isPalindrome(s) ? "Yes\n" : "No\n");
    return 0;
}
