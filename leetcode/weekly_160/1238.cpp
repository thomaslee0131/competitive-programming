class Solution {
public:
    vector<int> circularPermutation(int n, int start) {
        vector<int> tem = {0, 1};
        vector<int> ans;
        int t = 2;
        for(int i=2;i<=n;i++){
            for(int k=t-1;k>=0;k--){
                tem.push_back(tem[k]+t);
            }
            t*=2;
        }
        for(int i=0;i<tem.size();i++){
            if(tem[i] == start){
                int cnt = tem.size();
                while(cnt --){
                    ans.push_back(tem[i++]);
                    if(i == tem.size()) i = 0;
                }
                break;
            }
        }
        return ans;
    }
};
