#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int len[101][101];
int pre[101][101];

void length_of_LCS(string s1, string s2){
    int n1 = s1.length(), n2 = s2.length();

    //initialize
    for(int i=0;i<=n1;i++) len[i][0] = 0;
    for(int i=0;i<=n2;i++) len[0][i] = 0;

    //fill dp array
    for(int I=1;I<=n1;I++){
        for(int J=1;J<=n2;J++){
            int i = I-1, j = J-1;
            if(s1[i] == s2[j]){
                len[I][J] = len[I-1][J-1] + 1;
            }
            else{
                len[I][J] = max(len[I][J-1], len[I-1][J]);
            }
        }
    }
    cout<<"Length of LCS = "<<len[n1][n2]<<endl;
}

void find_one_LCS(string s1, string s2){
    int n1 = s1.length(), n2 = s2.length();

    //initialize
    for(int i=0;i<=n1;i++) len[i][0] = 0;
    for(int i=0;i<=n2;i++) len[0][i] = 0;

    //fill dp array
    for(int I=1;I<=n1;I++){
        for(int J=1;J<=n2;J++){
            int i = I-1, j = J-1;
            if(s1[i] == s2[j]){
                pre[I][J] = 0; // 左上
                len[I][J] = len[I-1][J-1] + 1;
            }
            else{
                if(len[I][J-1] > len[I-1][J]){
                    len[I][J] = len[I][J-1];
                    pre[I][J] = 2; // 左
                }
                else{
                    len[I][J] = len[I-1][J];
                    pre[I][J] = 1; // 上
                }
            }
        }
    }
    cout<<"Length of LCS = "<<len[n1][n2]<<endl;
    int lcs = len[n1][n2];
    int i = n1, j = n2;
    string s = "";
    while(lcs>0){
        if(pre[i][j] == 0){
            s += s1[i-1];
            lcs--;
            i--;
            j--;
        }
        else if(pre[i][j] == 1){
            i--;
        }
        else if(pre[i][j] == 2){
            j--;
        }
    }
    cout<<"LCS:";
    for(int x=s.size();x>=0;x--){
        cout<<' '<<s[x];
    }
    cout<<endl;
}

int main(){
    while(1){
        string s1, s2; cin>>s1>>s2;
        //length_of_LCS(s1, s2);
        find_one_LCS(s1, s2);
        /*cout<<"    ";
        for(char c: s2)cout<<c<<' ';
        cout<<endl;
        for(int i=0;i<s1.size()+1;i++){
            if(i)cout<<s1[i-1]<<' ';
            else cout<<"  ";
            for(int j=0;j<s2.size()+1;j++){
                cout<<len[i][j]<<' ';
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<"    ";
        for(char c: s2)cout<<c<<' ';
        cout<<endl;
        for(int i=0;i<s1.size()+1;i++){
            if(i)cout<<s1[i-1]<<' ';
            else cout<<"  ";
            for(int j=0;j<s2.size()+1;j++){
                cout<<pre[i][j]<<' ';
            }
            cout<<endl;
        }*/
    }
}
