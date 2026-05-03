class Solution {
public:
    void getpermu(vector<int>&arr, int idx, vector<vector<int>>&ans){
        if(idx==arr.size()){
            ans.push_back({arr});
            return;
        }
        for(int i=idx;i<arr.size();i++){
            bool alreadycount=false;
            for(int j=idx;j<i;j++){
                if(arr[j]==arr[i]){
                    alreadycount=true;
                    break;
                }
            }
            if(alreadycount)continue;
            swap(arr[idx],arr[i]);

            getpermu(arr,idx+1,ans);
            swap(arr[idx],arr[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        getpermu(nums,0,ans);
        return ans;
        
    }
};
