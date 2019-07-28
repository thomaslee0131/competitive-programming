#include<iostream>
using  namespace std;
long long n,i;
int main ()
{
	cin>>n;
	for (i=2; i*i<=n; i++)

		if (n%i==0) return cout<<(n-i)/2+1,0;

cout<<1;

	return 0;
}
