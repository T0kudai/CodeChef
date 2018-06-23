#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin >> s;
		int awake=1, food=0,poss=1;
		for (int j; j < s.length()-1;j++)
		{
			char i = s[j];
			if(i=='S'){
				awake = 0;
			}
			else if((i=='C'||i=='E')&&awake==0){
				poss = 0;
			}
			else if(i=='C'&&awake==1){
				food = 1;
			}
			else if(i=='E'&&food==0){
				poss = 0;
			}
		}
		if(poss==1) cout << "yes\n";
		else cout << "no\n";
	}
}