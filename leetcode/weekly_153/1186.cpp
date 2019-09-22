class Solution {
public:
    int A[100005];
    int B[100005];
    int maximumSum(vector<int>& arr) { 
        A[0]=arr[0];
        B[0]=0;
        for(int i=1;i<arr.size();i++){
            A[i]=max(A[i-1]+arr[i], arr[i]);
            B[i]=max(B[i-1]+arr[i], A[i-1]);
        }
        int ans=-10000000;
        for(int i=0;i<arr.size();i++){
            if(i!=0){
                ans=max({ans, A[i], B[i]});
            }
            else
                ans=max(ans, A[i]);
        }
        return ans;
    }
};
