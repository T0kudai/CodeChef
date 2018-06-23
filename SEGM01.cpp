#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		bool seg = false;
		int l=s.length();
		int i=0;
		while(i++==0){;}
		while(i++==1){;}
		seg = true;
		for (i; i < l - 1;l++){
			if(s[i]==1){
				seg = false;
				break;
			}
		}

		//if (seg == true) cout << "YES";
		//else cout << "NO";
		cout << seg<<'\n';
	}
}