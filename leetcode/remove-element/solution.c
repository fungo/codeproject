#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int removeElement(int A[], int n, int elem) {
    // Start typing your C/C++ solution below
    // DO NOT write int main() function
    
    int length, i, j;
    length = n;
    char *flag = (char *)malloc(sizeof(char)*n);
    memset(flag, 0, sizeof(char)*n);
    char *p = flag;
    int *start, *end;
    start = end = A;
    for(i = 0; i < n; i++)
        if(A[i] == elem)
        {
            length--;
            flag[i] = 1;
        }
    for(i = 0, j = 0; i < length; i++, j++)
    {
        while(flag[j])
        {
            j++;
        }
        A[i] = A[j];
    }
    
    free(flag);
    return length;
}


int
main()
{
    int A[] = {1, 2, 3, 4, 5, 2, 6};
    int num = removeElement(A, 7, 2), i;
    printf("%d \n", num);
    for(i = 0; i < num; i++)
        {
            printf("%d ", A[i]);
        }
    printf("\n");
    return 0;
}
