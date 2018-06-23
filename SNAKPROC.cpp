#include<bits/stdc++.h>
using namespace std;

int main(){
	int r;
	cin>>r;
	while(r--){
		int l;
		cin >> l;
		string str;
		int h=0;
		cin>> str;
		bool valid = true;
		for(int i=0;i<l;i++){
			if(str[i]=='.'){
				continue;
			}
			else if(str[i]=='H'){
				if(h==1){valid=false;
					break;
				}
				else{
					h=1;
				}
			}
			else if(str[i]=='T'){
				if(h==0){
					valid=false;
					break;
				}
				else{
					h=0;
				}
			}
		}
		if(h==0&&valid==true){
			cout << "Valid\n";
			}
		else cout << "Invalid\n";
	}
}