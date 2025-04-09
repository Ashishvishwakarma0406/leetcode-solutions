class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){return 0;}
        if(nums.size()==1){return 1;}
        sort(nums.begin(),nums.end());
        int count =1;
        int temp=0;
        int d=100000;
        for(int i=0;i<nums.size()-1;i++){
            d =nums[i+1]-nums[i];
            if(d==1 || d==0){
                count++;
                if(d==0){count-=1;}
                if(count>temp){
                    temp=count;
                }
            }else{
                count=1;
            }
        }
        return temp;
    }
};
