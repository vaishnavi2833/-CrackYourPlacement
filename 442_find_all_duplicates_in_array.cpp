class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>mpp;
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(mpp.find(nums[i])!=mpp.end()){
                ans.push_back(nums[i]);
            }else{
                mpp[nums[i]]++;
            }
        }
        return ans;
    }
};