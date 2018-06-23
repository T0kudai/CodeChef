#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	std::ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		ll prefixSum=0,suffixSum=0,min_sum;
		int min_index;
		int n;cin>>n;
		vector<int> nos(n);
		for(int i=0;i<n;i++){
			cin>>nos[i];
			suffixSum+=nos[i];
		}
		prefixSum=nos[0];
		min_index=0;
		min_sum=suffixSum+prefixSum;
		for(int i=1;i<n;i++){
			suffixSum-=nos[i-1];
			prefixSum+=nos[i];
			if(min_sum>suffixSum+prefixSum){
				min_sum=suffixSum+prefixSum;
				min_index=i;
			}
		}
		cout<<min_index+1<<'\n';
	}
}
