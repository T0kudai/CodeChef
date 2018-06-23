#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
	while(t--){
	    int islands, ingredients;
	    cin >> islands >> ingredients;
	    vector<int> ingr(ingredients);
	    int sum = 0;
	    bool check = true;
	    int value;
	    for (int i = 0;i<islands;i++){
			int ing_on_island;
			cin >> ing_on_island;
			for (int j = 0; j < ing_on_island;j++){
			    int ing;
			    cin >> ing;
				if(ingr[ing]!=1){
				    ingr[ing] = 1;
				    sum++;
				}
			}
			if(check==true&&sum==ingredients){
				if(i<islands-1){
				    check = false;
				    value = 1;
				}
				else if(i==islands-1){
				    check = false;
				    value = 2;
				}
			}
		}
		if(check==true){
		    value = 3;
		}
		switch(value){
			case 1:
			    cout << "some\n";
			    break;
			case 2:
			    cout << "all\n";
			    break;
			case 3:
			    cout << "sad\n";
			    break;
		}
	}
}