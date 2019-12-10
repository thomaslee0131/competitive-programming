class Solution {
public:
    using Box = array<int, 256>;
    int ans = 0;
    Box cnt[16];
    
    void dfs(vector<string>& arr, int p, bool use, int len, Box& cnti){
        if(use){
            for(char key='a';key<='z';key++){
                int val = cnt[p][key];
                cnti[key]+=val;
                if(cnti[key]>1){
                    for(int key2='a';key2<='z';key2++){
                        int val2 = cnt[p][key2];
                        if(key2 == key){
                            cnti[key]-=val;
                            break;
                        }
                        cnti[key2]-=val2;
                    }
                    return;
                }
            }
        }
        if(p == arr.size()-1){
            ans = max(ans, len);
            if(use){
                for(char key='a';key<='z';key++){
                    int val = cnt[p][key];
                    cnti[key]-=val;
                }
            }
            return;
        }
        dfs(arr, p+1, 0, len, cnti);
        dfs(arr, p+1, 1, len+arr[p+1].size(), cnti);
        if(use){
            for(char key='a';key<='z';key++){
                int val = cnt[p][key];
                cnti[key]-=val;
            }
        }
    }
    
    int maxLength(vector<string>& arr) {
        for(int i=0;i<arr.size();i++){
            for(char c: arr[i]){
                cnt[i][c]++;
            }
        }
        Box cnti;
        dfs(arr, 0, 0, 0, cnti);
        cnti = Box{};
        dfs(arr, 0, 1, arr[0].length(), cnti);
        return ans;
    }
};
