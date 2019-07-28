#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long n,minn=10e9,minlen=10e9,len=0;
    cin>>n;
    for(int i=0;i<n;i++){
        long long a;
        cin>>a;
        if(i!=0){
            if(a!=minn)len++;//cout<<"minn="<<minn<<endl;}
            else{
                len++;
                minlen=min(minlen,len);
                //cout<<"len=0"<<endl;
                len=0;
            }
        }
        if(minn>a){
            minn=a;
            len=0;
            //cout<<"minn="<<minn<<endl;
            minlen=10e9;
        }
    }
    //cout<<len<<endl;
    cout<<minlen<<endl;
}
