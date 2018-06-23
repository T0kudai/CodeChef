#include <iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--)
	{
		long long int u, v;
		cin >> u >> v;
		long long int x=u+v;
		cout<<((x*(x+1))/2)+(u+1)<<'\n';
	}
}