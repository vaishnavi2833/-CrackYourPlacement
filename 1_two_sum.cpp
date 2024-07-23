class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n =nums.size();
        map<int,int>mpp;
        vector<int>ans;
        for(int i=0;i<n;i++){
            int temp=target-nums[i];
            if(mpp.find(temp)!=mpp.end()){
                ans.push_back(mpp[temp]);
                ans.push_back(i);
                break;
            }else{
                mpp[nums[i]]=i;
            }
        }
        return ans;
    }
};