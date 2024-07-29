class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size();
        int ans = 0;
        for(int i =0;i<n;i++){
            int leftsmall = 0, leftbig = 0;
            int rightsmall = 0,rightbig = 0;
            
            for(int j=i-1;j>=0;j--){
                if(rating[i]>rating[j]) leftsmall+=1;
                if(rating[i]<rating[j]) leftbig+=1;
            }
            for(int j=i+1;j<n;j++){
                if(rating[i]>rating[j]) rightsmall+=1;
                if(rating[i]<rating[j]) rightbig+=1;
            }
            
            int LtoR=leftsmall*rightbig;
            int RtoL=leftbig*rightsmall;
            ans+=LtoR+RtoL;
        }
        return ans;
        
    }
};