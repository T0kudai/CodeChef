#include<bits/stdc++.h>
using namespace std;

int main(){
	int s;
	cin>>s;
	while(s--){
		int n;
		cin >> n;
		vector<int> h(n);
		for (int i = 0;i<n;i++) cin >> h[i];

		bool valid = true;

		if(n%2==0 || h[0] != 1){ valid=false;}
		int mid = n / 2;

		if(valid==true){
			for (int i = 0; i < mid; i++){
				if (h[i] + 1 == h[i + 1]) continue; else{ valid = false; break;}
			}
		}
		if(valid==true){
			for (int i = mid;i<n-1;i++){
				if (h[i] - 1 == h[i + 1]) continue; else{ valid = false;}
			}
		}
		
		if(valid==true) cout << "yes\n";
		else cout << "no\n";
	}
}