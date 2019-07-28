#include<iostream>
using namespace std;
void output(char prob,int team,int ti){
    cout<<"Send balloon of "<<prob<<" to team "<<team<<" at time "<<ti<<'.'<<endl;
}
bool solved[28][7];
int main(){
    int N;
    cin>>N;
    while(N--){
        int id,team,ti;
        string ver;
        char prob;
        cin>>id>>team>>ti>>prob>>ver;
        if(ver=="AC" && !solved[team-1][prob-'A'] && ti<180){
            solved[team-1][prob-'A']=1;
            output(prob,team,ti);
        }
    }
    cout<<"Go get snacks."<<endl;
}
