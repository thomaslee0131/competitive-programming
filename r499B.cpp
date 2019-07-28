#include<iostream>
#include<algorithm>
using namespace std;
int a[101];
int main()
{
	int n,m,c=0;
	cin>>n>>m;
	for(int i=0;i<m;i++){
	    int x; 
		cin>>x;
		if(a[x]==0) c++;
		a[x]++;
	}
	int p=m/n,j,k=n ;
	sort(a,a+101,greater<int> () );
	while(p>0){ 
	for(int i=0;i<k;i++) {
		if(a[i]==0) break;
		for(j=p;j>=1;j--){
			if(a[i]/j > 0){
				p=j;
				n-=a[i]/j;
				break;
            }
		    if(j==0) {p=0; break;}
		    if(n<=0) break;
		}
	}
		if(n<=0) break;
		else{
			n=k;
			p-=1;
		}
	}
	cout<<p<<endl;
}
