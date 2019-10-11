#include<iostream>
#include<list>
#include<vector>
using namespace std;

list<pair<char, int>> l; 

int main(){
    string s; cin>>s;
    int k; cin>>k;
    for(char c: s){
        if(l.empty() || l.back().first != c){
            l.push_back({c, 1});
        }
        else{
            l.back().second++;
        }
    }
    vector temp = {l.begin()};
    temp.clear();
    for(auto it = l.begin();it!=l.end();++it){
        if(it->second >= k){
            temp.push_back(it);
        }
    }
    int cnt=0;
    while(temp.size()){
        cnt++;
        auto now = move(temp);
        temp.clear();
        for(auto it: now){
            if(it->second%k == 0){
                it = l.erase(it);
                if(it != l.begin() && it  != l.end()){
                    if(it->first == prev(it)->first){
                        if(prev(it)->second >= k){
                            prev(it)->second+=it->second;
                            l.erase(it);
                            continue;
                        }
                        prev(it)->second+=it->second;
                        it = l.erase(it);
                        it = prev(it);
                        if(it->second>=k){
                            temp.push_back(it);
                        }
                    }
                }
            }
            else{
                it->second%=k;
            }
        }
    }
    cout<<cnt<<endl;
    for(auto [c, n]: l){
        cout<<c<<' '<<n<<endl;
    }
}
