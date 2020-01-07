class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        for(auto& q: queries){
            int l = q[0], r = q[1];
            int tmp = arr[l];
            for(int i = l+1; i <= r; i++){
                tmp = tmp ^ arr[i];
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};
