#include <stdio.h>
#include <stdlib.h>

void merge(int A[], int m, int B[], int n) 
{
    int *pa = A, *pb = B, *pa_end = &A[m+n-1];
    int i;
    i = 0;
    while( i++ < m) pa++;
    pa--;
    i = 0;
    while( i++ < n) pb++;
    pb--;
    
    while(pb >= B)
    {
        /* pa has dirty value
            if only
            if(*pa > *pb)
            runtime error happen
        */
        if(m > 0 && *pa > *pb)
        {
            *pa_end = *pa;
             pa--;
             m--;
        }
        else
        {
            *pa_end = *pb;
            pb--;
        }
        pa_end--;
    }
}

int
main()
{
   /* int A[20] = {1, 2, 3, 6, 8, 9, 20, 22, 23};
    int B[] = {2, 4, 7, 10, 11, 12};*/
    int B[] = {12};
    int A[] = {};
    int m = 0, n = 1;
    merge(A, m, B, n);
    int i;
    for(i = 0; i < m+n; i++)
        printf("%d ", A[i]);
    printf("\n");
    return 0;
}
