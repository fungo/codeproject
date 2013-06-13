#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

string convert(string s, int nRows) {
    if(nRows == 1) return s;
    string result = "";
    int i, j, count, nCols;
    nCols = s.length()/(nRows - 1) + 1;
    char *set = (char *) malloc(sizeof(char)*nRows*nCols);
    memset(set, 0, sizeof(char)*nRows*nCols);
    count = 0;
    
    for(j = 0; j < nCols && count < s.length(); j++)
        if(j % 2 == 0)
            for(i = 0; i < nRows; i++)
            {
                set[i*nCols + j] = s.at(count);
                count++;
                if(count == s.length()) break;
            }
        else
            for(i = nRows-2; i > 0; i--)
            {
                set[i*nCols + j] = s.at(count);
                count++;
                if(count == s.length()) break;
            }
     for(i = 0; i < nRows; i++)
        for(j = 0; j < nCols; j++)
            if(set[i*nCols + j]) 
                result.append(&set[i*nCols + j], 0, 1);

    free(set);
    return result;
}


int
main()
{
    cout<<convert("ABCDE", 2)<<endl;;
}

