#include <stdio.h>
#include <stdlib.h>
#include <iostream>  
using namespace std;

char numStr[20];

char* toString(int x)
{
    char *p = numStr;
    while(x)
    {
        *p = x%10 + '0';
        x /= 10;
        p++;
    }
    *p = '\0';
    p--;
    return p;
}

bool isPalindrome(int x)
{
    if(x < 0) return false;
    if(x < 10) return true;
    
    char* end = toString(x);
    char* start = numStr;
    while(start < end)
        if(*start++ != *end--) return false;
    return true;
}

int 
main()
{
    int num = 0;
    printf(isPalindrome(num) ? "YES\n" : "NO\n");
    return 0;
}

