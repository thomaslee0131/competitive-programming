#include<iostream>
using namespace std;
int main(){
    string s,result;
    cin>>s;
    int one,zero;
    one=zero=0;
    int l=s.size();
    for(int j=l-1;j>=0;j--)
        if(s[j]=='0')zero++;
        else if(s[j]=='1')one++;
        else if(s[j]=='2'){
            for(int i=0;i<zero;i++)
                result=result+'0';
            result=result+'2';
            zero=0;
        }
    for(int j=0;j<one;j++)
        result=result+'1';
    for(int j=0;j<zero;j++)
        result=result+'0';
    for(int j=result.size()-1;j>=0;j--)
        cout<<result[j];
    cout<<endl;//100210
}
