#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int ques[7]={0};
		string s;
		for(int i=0;i<n;i++){
			cin>>s;
			if(s=="cakewalk")ques[0]++;
			if(s=="simple")ques[1]++;
			if(s=="easy")ques[2]++;
			if(s=="easy-medium")ques[3]++;
			if(s=="medium")ques[4]++;
			if(s=="medium-hard")ques[5]++;
			if(s=="hard")ques[6]++;
		}
		if(ques[0]>0&&ques[1]>0&&ques[2]>0&&(ques[3]>0||ques[4]>0)&&(ques[5]>0||ques[6]>0))
			cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}
