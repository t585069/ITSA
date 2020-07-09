#include <iostream>
using namespace std;

// 字串切割

int main(){
	int i=0, j=0, n=0;
	string str;
	
	cin >> n;
	
	for(i=0; i<n; i++){
		
		cin >> str;
		
		cout<< "Tokens found:" << endl;
		
		for(j=0; j<str.size(); j++){
			
			if(str[j] == ':' || str[j] == ';' || str[j] == ','){
				cout << endl;
				continue;
			}
			
			cout << str[j];
		
		}
		cout << endl;	
	}
	
	return 0;
}

