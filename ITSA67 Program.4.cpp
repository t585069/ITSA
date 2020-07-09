#include <iostream>
using namespace std;

// 狀態機

int main(){
	int i=0, j=0, n=0, pos=0;
	string str;
	
	
	cin >> n >> pos;
	cin >> str;
	char stat[n][n];
	
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			cin >> stat[i][j];	
	
	cout<< pos ;
	pos -= 1;
	for(i=0; i<str.size(); i++){
		
		for(j=0; j<n; j++){
			if(stat[pos][j] == str[i]){
				cout<< j+1;
				pos = j;
				
			}			
		}		
	}
	cout<<endl;

	return 0;
}

