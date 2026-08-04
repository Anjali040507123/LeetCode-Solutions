class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        int k=0;
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        for(int i=mini;i<=maxi;i++){
            if(k<nums.size() && nums[k]==i){
                k++;
            }
            else{
                ans.push_back(i);
            }
        }
        return ans;
    }
};