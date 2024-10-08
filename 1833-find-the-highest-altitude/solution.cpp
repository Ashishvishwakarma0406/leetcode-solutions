class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        int max=0;
        // vector <int> x ={};
        for(int i=0; i<gain.size();i++){
            sum = sum+gain[i];
            if(sum>max){
                max=sum;
            }
            // x.push_back(sum);
        }
        return max;
        // int max_value = *max_element(x.begin(), x.end());
        // if(max_value>=0){
        //     max_value=max_value;
        // }
        // else{
        //     max_value=0;
        // }


    }
};
