#include <stdio.h>
#include <stdlib.h>



int
reverse(int x)
{
    int flag = 1, result = 0, digit_bits[15];
    int *p, *q;
    p = q = digit_bits;

    if(x >= 0)
    {
        while(x>0)
        {
            *p = x%10;
            x /= 10;
            p++;
        }
        while(q!= p)
        {
            result = result*10 + *q;
            q++;
        }
    }
    else
    {
        flag = -1;
        x = -x;
        while(x>0)
        {
            *p = x%10;
            x /= 10;
            p++;
        }
        while(q != p)
        {
            result = result*10 + *q;
            q++;
        }
    }
    
    return flag*result;
}

int
main()
{
    int num;
    while(scanf("%d", &num) != EOF)
    {
               
        printf("%d\n", reverse(num));
    }
    return 0;
}



