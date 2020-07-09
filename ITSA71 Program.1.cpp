#include <iostream>
using namespace std;

// 猜數字

int main(){
	int i=0, j=0, n=0, A=0, B=0;
	string ans, str;

	cin >> ans;
	while(cin >> str){
		if(str == "0000")
			break;
		
		A=0;
		B=0;
		for(i=0; i<4; i++){
			for(j=0; j<4; j++){
				
				if(ans[i] == str[j]){
					if(i == j)
						A++;
					else
						B++;
					break;
				}	
				
			}
		}
		cout<< A << "A" << B << "B" <<endl;
	}
	

	return 0;
}

