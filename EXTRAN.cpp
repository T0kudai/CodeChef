#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	long T,N;
	cin>>T;
	while(T--){
		cin>>N;
		vector<long long int> arr(N);
		for(int i=0;i<N;i++){
			cin>>arr[i];
		}
		sort(arr.begin(),arr.end());
		for(int i=0;i<N-1;++i){
			if(arr[i]==arr[i+1]||arr[i+1]!=arr[i]+1){
				if(i!=N-2){
					cout<<arr[i]<<'\n';
				}
				else
					cout<<arr[i+1]<<'\n';
			}
		}
	}
	return 0;
}