class Solution {
public:
    long long gcd(long long a, long long b){
        if(b==0) return a;
        return gcd(b, a%b);
    }
    long long lcm(long long a, long long b){
        return a*b/gcd(a,b);
    }
    int cal(int n, int a, int b, int c){
        return n/a+n/b+n/c+n/lcm(a, lcm(b,c))-n/lcm(a,b)-n/lcm(a,c)-n/lcm(c,b);
        
    }
    int nthUglyNumber(int n, int a, int b, int c) {
        long long l=1, r=2e9, mid;
        while(l!=r){
            mid=(l+r)/2;
            int num = cal(mid, a, b, c);
            if(num>=n){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};
