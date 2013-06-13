//http://www.geeksforgeeks.org/median-of-two-sorted-arrays/
//http://gongxuns.blogspot.jp/2012/12/leetcodemedian-of-two-sorted-arrays.html


public class Solution {
    public double findMedianSortedArrays(int A[], int B[]) {
        // Start typing your Java solution below
        // DO NOT write main() function
        
        int sizeA = A.length;
        int sizeB = B.length;
        
        if(sizeA == 0)
            return (sizeB % 2 == 1) ? B[sizeB/2] : (B[sizeB/2 - 1] + B[sizeB/2]) / 2.0;
        if(sizeB == 0)
            return (sizeA % 2 == 1) ? A[sizeA/2] : (A[sizeA/2 - 1] + A[sizeA/2]) / 2.0;
        
        return 0.1;
        
    }
    
    public static void main(String args[]){
    
    int a[] = {1, 2, 3, 4};
    int b[] = {2, 3, 4, 5};
    Solution aSolution = new Solution();
    System.out.println(aSolution.findMedianSortedArrays(a, b));
    
    }
}
