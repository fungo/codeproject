#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int A[], int n) {
    // Start typing your C/C++ solution below
    // DO NOT write int main() function
    if(n <= 1) return n;
    int dupCount = 0, flag = A[0] - 1, dupNum = 0;
    
    int i = 0, j = 1;
    
    while( j < n )
    {
        dupNum = 0;
        while(A[j] == A[i])
        {
            if(dupNum > 0)
            {
                A[j] = flag;
                dupCount++;
            }
            dupNum++;
            j++;
        }
        i = j;
        j += 1;
    }
    
    i = j = 0;
    while(j < n)
    {
        
        while(A[j] == flag) j++;
        
        A[i++] = A[j++];
    }
    
    return n - dupCount;
}

int
main()
{
    int A [] = {-3,-3,-2,-1,-1,0,0,0,0,0};
    int num  = removeDuplicates(A, 10);
    int i;
    for(i = 0; i < num; i++)
        printf("%d ", A[i]);
    printf("\n");
}
