#include<iostream>
#include<vector>
#include<map>
using namespace std;
long long num[200010];
long long has[1000010];
bool del[1000010];
vector<int>pos[1000010];
int main(){
    long long n;
    scanf("%lld",&n);
    long long sum=0;
    for(long long i=0;i<n;i++){
        scanf("%lld",&num[i]);
        sum+=num[i];
        has[num[i]]++;
        pos[num[i]].push_back(i+1);
    }
    long long ans=0;
    for(long long i=1;i<=(int)1e6;i++){
        if(has[i]){
            long long nowsum=sum-i;
            if(nowsum/2<1000010){
                if(nowsum%2==0&&has[nowsum/2]){
                    if(nowsum/2==i&&has[i]==1){
                        continue;
                    }
                    ans+=has[i];
                    del[i]=1;
                }
            }
        }
    }
    printf("%lld\n",ans);
    for(int i=1;i<=1000000;i++){
        if(del[i]){
            for(int j=0;j<(int)pos[i].size();j++){
                printf("%d ",pos[i][j]);
            }
        }
    }
    printf("\n");
}
