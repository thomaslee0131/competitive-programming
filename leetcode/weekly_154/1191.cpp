class Solution {
public:
    const long long MOD=1e9+7;
    long long b[100005];
    long long s[100005];
    long long s2[100005];
    long long pre[100005];
    long long suf[100005];
    int kConcatenationMaxSum(vector<int>& a, int k) {
        long long sum=0;
        long long n=a.size();
        b[0]=a[0];
        long long msb=-10005;
        for(int i=1;i<n;i++){
            b[i]=max(b[i-1]+(long long)a[i],(long long)a[i]);
            msb=max(msb, b[i]);
        }
        long long pre=-10005, suf=-10005;
        s[0]=a[0]; pre=max(pre, s[0]);
        for(int i=1;i<n;i++){
            s[i]=s[i-1]+a[i];
            pre=max(pre, s[i]);
        }
        s2[n-1]=a[n-1];
        suf=max(suf, s2[n-1]);
        for(int i=n-2;i>=0;i--){
            s2[i]=s2[i+1]+a[i];
            suf=max(suf, s2[i]);
        }
        pre=max(pre,(long long)0);
        suf=max(suf,(long long)0);
        long long msb2=(pre+suf)%MOD, msb3=(s[n-1]*(k-2)+msb2)%MOD;
        return (int)max({msb, msb2, msb3});
    }
};
