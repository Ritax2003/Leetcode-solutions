class Solution {
public:
    void IOHack(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0;
        int cnt2 = 0;
        int ele1,ele2;
        int mini = (int)(nums.size()/3)+1;
        
        for(int i=0;i<nums.size();i++){
            if(cnt1 == 0 and ele2!=nums[i]){
                cnt1 = 1; ele1 = nums[i];
            }
            else if(cnt2 == 0 and ele1!=nums[i]){
                cnt2 = 1; ele2 = nums[i];
            }
            else if(nums[i] == ele1) cnt1++;
            else if(nums[i]==ele2) cnt2++;
            else{
                cnt1--; cnt2--;
            }
            
        }
        int cnt11=0,cnt22=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i] == ele1) cnt11++;
            if(nums[i] == ele2) cnt22++;
        }
        vector<int>ans;
        if(cnt11>=mini) ans.push_back(ele1);
        if(cnt22>=mini) ans.push_back(ele2);
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};