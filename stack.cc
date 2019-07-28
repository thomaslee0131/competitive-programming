#include<iostream>
#include<stack>
using namespace std;


int main(){
    stack<int> s;
    s.push(87);
    s.push(88);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;    
}
