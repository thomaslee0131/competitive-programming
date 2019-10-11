class Solution {
public:
    map<int, int>cnt;
    map<int, int>oc;
    bool uniqueOccurrences(vector<int>& arr) {
        for(int i: arr){
            cnt[i]++;
        }
        for( auto const& [key, val] : cnt ){
            oc[val]++;
        }
        for( auto const& [key, val] : oc ){
            if(val>1){
                return 0;
            }
        }
        return 1;
    }
};
