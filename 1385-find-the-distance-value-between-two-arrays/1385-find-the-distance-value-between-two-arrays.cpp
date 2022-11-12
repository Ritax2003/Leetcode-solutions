class Solution {
private:
    bool bs(int num,vector<int>&arr,int d){
        int lo =0,hi = arr.size()-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(abs(num-arr[mid])<=d) return false;
            if(arr[mid]>num) hi = mid-1;
            else lo = mid+1;
        }
        return true;
    }
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
       sort(arr2.begin(),arr2.end());
        int ans = 0;
        for(int num:arr1){
            if(bs(num,arr2,d)) ans++;
        }
        return ans;
    }
};