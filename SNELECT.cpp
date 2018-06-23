#include<iostream>
#include<stack>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string x;
		cin>>x;
		bool safe=false;
		int sc=0,mc=0;
		char last='a';
		for(int i=0;i<x.length();i++){
			if(x[i]=='m'){
				if(last=='s'){
					sc--;mc++;
					safe=true;
					last='m';
				}
				else{
					mc++;
					last='m';
					safe=false;
				}
			}
			if(x[i]=='s'){
				if(last=='m'){
					if(safe==true){
						last='s';
						sc++;
					}
					if(safe==false){
						last='m';
						safe=true;
					}
				}
				else{
					sc++;
					last='s';
				}
			}
		}
		if(mc>sc) cout<<"mongooses\n";
		else if(mc<sc) cout<<"snakes\n";
		else cout<<"tie\n";
	}
}