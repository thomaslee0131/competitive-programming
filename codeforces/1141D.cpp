#include<iostream>
#include<map>
#include<vector>
#include<stack>
using namespace std;

stack<int> s1[255], s2[255];
stack<pair<int,int> > ss;

void mm( stack<int> &l, stack<int> &ll )
{
	while( !l.empty() && !ll.empty() )
	{
		ss.push( { l.top(), ll.top() } ), l.pop(), ll.pop();
	}
}

int
main()
{
	string s, t;
	int n;
	scanf( " %d", &n );
	cin >> s >> t;
	for( int i = 1 ; i <= n ; ++i )
		s1[s[i-1]].push( i ), s2[t[i-1]].push( i );
	for( int i = 'a' ; i <= 'z' ; ++i )
		mm( s1[i], s2[i] ), mm( s1[i], s2['?'] ), mm( s1['?'], s2[i] );
	mm( s1['?'], s2['?'] );
	cout << ss.size() << endl;
	while( ss.size() > 0 )
		printf("%d %d\n", ss.top().first, ss.top().second ), ss.pop();
}
