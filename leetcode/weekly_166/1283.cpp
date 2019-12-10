class Solution {
public:
    int cal(vector<int>& nums, int d){
        int ret = 0;
        for(int n: nums){
            if(n%d)
                ret += (n/d+1);
            else
                ret += (n/d);
        }
        return ret;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxnum = 0;
        for(int n: nums)
            maxnum = max(maxnum, n);
        int l = 1, r = maxnum, mid = (l+r)/2;
        while(l<r){
            //cout<<l<<' '<<r<<endl;
            int res = cal(nums, mid);
            if(res > threshold)
                l = mid+1;
            else
                r = mid;
            mid = (l+r)/2;
        }
        return mid;
    }
};
