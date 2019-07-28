#include<iostream>
using namespace std;
char a[110];
bool c[100];
int main(){
    int n ;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i]=='u'||a[i]=='o'||a[i]=='i'||a[i]=='a'||a[i]=='e'||a[i]=='y'){
            c[i]=true;
            if(a[i-1]=='u'||a[i-1]=='o'||a[i-1]=='i'||a[i-1]=='a'||a[i-1]=='e'||a[i-1]=='y'||c[i-1]==true){
                a[i]='0';
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]!='0')cout<<a[i];
    }
    cout<<endl;
}

