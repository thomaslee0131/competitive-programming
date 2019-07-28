#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
class Solution {
public:
    int index=0;
    bool solve(string &s){
        if(index>=(int)s.length())return false;
        int x=1;
        bool ret=true;
        if(s[index]!='a')return false;
        index++;
        while(x!=3&&index<(int)s.length()){
            if(s[index]=='a'){
                if(solve(s)==0){
                    ret=false;
                }
            }
            if(s[index]!='a'+x){
                ret=false;
            }
            x++;
            index++;
        }
        return ret;
    }
    bool isValid(string S) {
        while(index<(int)S.length()){
            if(S[index]=='a'){
                if(solve(S)==0){
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
};


int main (){
    Solution S;
    string s;
    cin>>s;
    cout<<S.isValid(s)<<endl;

}
