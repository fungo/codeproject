#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char * strip(const char *str)
{
    char *start, *end;
    start = end = (char *)str;
    while(*start == ' ') start++;
    while(*end) end++;
    end--;
    while(*end == ' ') end--;
    end++;
    *end = '\0';
    return start;
}

int atoi(const char *str) 
{
    
    int sign = 1;
    int result = 0;
    int digit_num = 0;
    char *p = strip(str);
    if(*p == '-') 
    {
        sign = -1;
        p++;
    }
    else if(*p == '+') p++;
    
    while(*p)
    {
        if(*p >= '0' && *p <= '9')
        {
            result = result*10 + (*p++ - '0') ;
            digit_num++;
        }
        else  break;
    }
    
    if(sign > 0 && (result < 0 || digit_num > 10)) return INT_MAX;
    if(sign < 0 && (result < 0 || digit_num > 10)) return INT_MIN;
    return sign * result;
    
}

int
main()
{
    char s[100];
    while(scanf("%s", s) != EOF)
        printf("%d\n", atoi(s));
    return 0;
}
