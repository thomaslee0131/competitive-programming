#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 5};
    *lower_bound(arr, arr+2, 3) = 3;
    for(int n: arr) cout<<n<<endl;
}
