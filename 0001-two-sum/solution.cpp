class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        int elem;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            elem=nums[i];
            if(map.find(target-elem)!=map.end()){
                return {i,map[target-elem]};
            }
            map[elem]=i;
        }
        return ans;
    }
};

