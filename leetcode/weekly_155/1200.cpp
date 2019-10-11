class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int absm=10000000;
        for(int i=1;i<arr.size();i++){
            absm = min(absm, arr[i]-arr[i-1]);
        }
        
        vector<vector<int>> ans;
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1] == absm){
                vector<int> v;
                v.push_back(arr[i-1]);
                v.push_back(arr[i]);
                ans.push_back(v);
            }
        }
        return ans;
    }
};
