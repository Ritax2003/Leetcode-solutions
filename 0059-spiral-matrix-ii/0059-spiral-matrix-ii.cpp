class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        vector<vector<int>>res(n,vector<int>(n,0));
        int startrow =0;
        int endrow = n-1;
        int startcol = 0;
        int endcol = n-1;
        int ele = 1;
        while(ele <= n*n){
            
            if(startcol<=endcol){
                for(int i=startcol;i<=endcol;i++){
                    res[startrow][i]=ele;
                    ele++;
                }
            }
            
            startrow++;
            if(startrow<=endrow){
                for(int j= startrow;j<=endrow;j++){
                    res[j][endcol] =ele;
                    ele++;
                }
            }
            endcol--;
            
            if(startcol<=endcol){
                for(int i=endcol;i>=startcol;i--){
                    res[endrow][i]=ele;
                    ele++;
                }
            }
            
            endrow--;
            
            if(startrow<=endrow){
                for(int j=endrow;j>=startrow;j--){
                    res[j][startcol]=ele;
                    ele++;
                }
            }
            startcol++;
            
        }
        
        return res;
    }
};