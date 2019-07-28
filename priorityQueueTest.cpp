#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>>qa;
    for(int i:{1,3,5,2,7,5,8}){
        qa.push(i);
    }
    for(int i=0;i<7;i++){
        cout<<qa.top()<<endl;
        qa.pop();
    }
}
