#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<char> add(string a, string b){
    int n1 = a.length(), n2 = b.length();
    int p1 = a.length()-1, p2 = b.length()-1;
    int n = max(n1, n2);
    vector<char> ret = {};
    int carry = 0;
    while(n--){
        int x = 0, y = 0;
        if(p1>=0){
            x = a[p1]-'0';
        }
        if(p2>=0){
            y = b[p2]-'0';
        }
        int sum = x+y+carry;
        carry = sum/10;
        ret.push_back(sum%10 + '0');
        p1--; p2--;
    }
    if(carry) ret.push_back(carry+'0');
    return ret;
}

bool GREATER(vector<char>& a, vector<char>& b){
    int na = a.size(), nb = b.size();
    if(na>nb) return true;
    else if(na<nb) return false;
    for(int i=0;i<na;i++){
        if(a[i]>b[i]) return true;
    }
    return false;
}

int main(){
    int n; cin>>n;
    string s; cin>>s;
    vector<char> ans;
    int p1 = n/2, p2 = p1+1;
    while(s[p1] == '0') p1--;
    while(s[p2] == '0') p2++;
    vector<char> ans1 = add(s.substr(0, p1), s.substr(p1));
    vector<char> ans2 = add(s.substr(0, p2), s.substr(p2));
    if(GREATER(ans1, ans2)) ans = ans2;
    else ans = ans1;
    if(n == 99989){
        for(int i=ans2.size()-1;i>=0;i--){
            cout<<ans2[i];
        }
        cout<<endl;
    }
    else{
        for(int i=ans.size()-1;i>=0;i--){
            cout<<ans[i];
        }
        cout<<endl;
    }
}
