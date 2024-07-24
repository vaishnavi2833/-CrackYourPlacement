class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[i-cnt] = nums[i];
            }
            if(nums[i]==0){
                cnt++;
            }
        }
        for(int i=n-cnt;i<n;i++){
            nums[i]=0;
        }
    }
};