#include<iostream>
#include<algorithm>
using namespace std;
char s1[20005], s2[20005];
int main(){
    string S1, S2; cin>>S1>>S2;
    int n1 = S1.length(), n2 = S2.length(), n = max(n1, n2);// y1 = 0, y2 = 0, w1 = 0, w2 = 0;
    /*for(int i=0;i<n;i++){
        if(s1[i] == 'Y') y1++;
        if(s1[i] == 'W') w1++;
        if(s2[i] == 'Y') y2++;
        if(s2[i] == 'W') w2++;
    }*/
    for(int i=0;i<n;i++){
        if(i >= n1){
            s1[i] = '0';
        }
        else{
            s1[i] = S1[i];
        }
        if(i >= n2){
            s2[i] = '0';
        }
        else{
            s2[i] = S2[i];
        }
    }
    long long val1 = 0;
    int took1 = 0, took2 = 0;
    for(int i=0;i<n;i++){
        if(s1[i] == 'W'){
            val1 += (i-took1+took2);
            took1++;
        }
        if(s2[i] == 'Y'){
            val1 += (i-took2+took1);
            took2++;
        }
    }
    long long val2 = 0;
    took1 = 0, took2 = 0;
    for(int i=0;i<n;i++){
        if(s1[i] == 'Y'){
            val2 += (i-took1+took2);
            took1++;
        }
        if(s2[i] == 'W'){
            val2 += (i-took2+took1);
            took2++;
        }
    }
    cout<<min(val1, val2)<<endl;
}
