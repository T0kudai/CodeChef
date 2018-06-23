#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		int ca = 0, cb = 0, i = 1;
		while(true){
			ca += i;
			i++;
			if(ca>a)
				break;
			cb += i;
			i++;
			if(cb>b)
				break;
		}
		if(ca>a)
			cout << "Bob"<<'\n';
		if(cb>b)
			cout << "Limak"<<'\n';
	}
}
