class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a=1;
        int temp=0;
        int maxElem = nums[0];
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                a++;
            }else{
                a=1;
            }
            if(a>temp){
                temp =a;
                maxElem=nums[i];
            }
        }

        return maxElem;
        
    }
}; 
