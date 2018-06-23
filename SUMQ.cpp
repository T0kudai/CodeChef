#include<iostream>
#include<vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		int p,q,r;
		cin>>p>>q>>r;
		vector<long long int> A(p),B(q),C(r);
		for(int i=0;i<p;i++) cin>>A[i];
		for(int i=0;i<q;i++) cin>>B[i];
		for(int i=0;i<r;i++) cin>>C[i];
		long long int sum=0;
		for (int a=0;a<p;a++){
			for(int b=0;b<q;b++){
				for(int c=0;c<r;c++){
					if(A[a]<=B[b]&&C[c]<=B[b]){
						sum+=(A[a]+B[b])*(B[b]+C[c]);
					}
				}
			}
		}
		cout<<sum<<'\n';
	}
}