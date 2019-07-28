#include<iostream>
#include<map>
using namespace std;
map<char,char>next;
bool hole[26];
int main(){
    int t;
    hole[0]=1;
    hole[1]=1;
    hole[3]=1;
    hole[14]=1;
    hole[4]=1;
    hole[15]=1;
    hole[16]=1;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int holes=k;
        int pointer=n-1;
        while(true){
           s[pointer]++;
           if(s[pointer]>'z'){
               if(pointer==0){
                    cout<<-1<<break;
               }
               else{
                    s[pointer='a'];
                    pointer--;
                    continue;
               }
           }
           if(hole[s[pointer]-'a']){
                
           }
        }
    }
}

