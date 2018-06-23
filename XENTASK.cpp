#include<iostream>
using namespace std;
int main(){
	int T,N;
	cin>>T;
	while(T--){
		cin>>N;
		long X_odd=0, X_even=0, Y_odd=0, Y_even=0,Xenny,Yana,a,b;
		for(int i=0;i<N;++i){
			cin>>Xenny;
			if(i%2==0) X_even+=Xenny;
			else X_odd+=Xenny;
		}
		for(int i=0;i<N;++i){
			cin>>Yana;
			if(i%2==0) Y_even+=Yana;
			else Y_odd+=Yana;
		}
		a=X_odd+Y_even;
		b=X_even+Y_odd;
		if(a<b) cout<<a<<'\n';
		else cout<<b<<'\n';
	}
}