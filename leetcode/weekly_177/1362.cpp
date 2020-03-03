class Solution {
public:
    vector<int> closestDivisors(int num) {
        int a = num+1, b = num+2;
        int x = sqrt(a), y = sqrt(b);
        int diff1 = a, diff2 = b;
        vector<int> ans1, ans2;
        for(; x >= 1; x--){
            if(a%x == 0){
                diff1 = abs(x-a/x);
                ans1 = {x, a/x};
                break;
            }
        }
        for(; y >= 1; y--){
            if(b%y == 0){
                diff2 = abs(y-b/y);
                ans2 = {y, b/y};
                break;
            }
        }
        if(diff1 < diff2){
            return ans1;
        }
        return ans2;
    }
};
