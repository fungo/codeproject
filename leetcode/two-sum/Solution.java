public class Solution {
    public int[] twoSum(int[] numbers, int target) {
        // Start typing your Java solution below
        // DO NOT write main() function
        
        Boolean found = false;
        int i = 0, j = 0;
        int result[] = new int[2];
        
        for(i = 0; !found && i < numbers.length; i++)
        {
            for(j = i+1; !found && j < numbers.length; j++)
            {
                if(numbers[i] + numbers[j] == target)
                {
                    found = true;
                }
            }
        }
        result[0] = i;
        result[1] = j;
        return result;  
    }
    
    public static void main(String args[])
    {
        int inputs[] = {2, 7, 11, 15};
        int target = 17;
        Solution aSolution = new Solution();
        int a[] = aSolution.twoSum(inputs, target);
        for(int i = 0; i < a.length; i++)
        {
            System.out.println(a[i]);
        }
    }
}


