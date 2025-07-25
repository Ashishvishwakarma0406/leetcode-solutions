class Solution {
    public int findNumbers(int[] nums) {
        int i=0, count=0;
        for(int n: nums){
            if ((9<n && n<100) || (999<n && n<10000) || (99999<n && n<1000000)){
                count++;
            }
        }
        return count;
    }
}
