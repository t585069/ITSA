#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

// 判斷迴文

int main(){
	int i=0, j=0, len=0, half=0;
	string str;
	
	while(cin >> str){
		
		
		len = str.size();		
		half = ceil(len / 2.0);

		int num1[half], num2[half];
		
		memset(num1, 0, sizeof num1);
		memset(num2, 0, sizeof num2);
		
		for(i=0; i<len; i++){
			
			if(i <= half)
				num1[i] = str[i] - 48;

				
			if(len % 2 != 0 && i == half-1)
				num2[0] = str[half-1] - 48;
			
					
			
			if(i >= half){
				
				if(len % 2 != 0)
					num2[i - (half-1)] = str[i] - 48;
				else
					num2[i - half] = str[i] - 48;			
			}		
		}


		bool fault_flag = 1;
		for(i=0; i<half; i++){
			
			if(num1[i] != num2[half-1-i]){
				
				
				fault_flag = 0;
				break;
			}
						
		}
		
		if(!fault_flag)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	
	}

	return 0;
}

