#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

// 求未知數

int main(){
	int i=0, j=0, pos=0, cs_pos=0;
	bool sign_flag = 1;
	double num[2];
	string str;
	
	while(getline(cin, str)){
		
	// 處理字串
		memset(num, 0, sizeof num);
		
		j=0;
		sign_flag = 1;
		for(i=0; i<str.size(); i++){

			if (str[i] >= '0' && str[i] <= '9'){
				
				if (sign_flag == 1)
					num[j] = 10.0*num[j] + (str[i] - 48); // 正數 
				else
					num[j] = 10.0*num[j] + (-1)*(str[i] - 48); // 負數 
				
				if(str[i+1] == ' ' || str[i+1] == '\t'){
					j++;
					sign_flag = 1;
				}
					
					
			}else if (str[i] == '-' && (str[i+1] >= '0' && str[i+1] <= '9') )
				sign_flag = 0; // 0 == '-', 1 == '+'
			else if (str[i] == 'x')
				pos = j; // x 的位置 
			else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
				cs_pos = i; // 取得運算符號位置		
		}
		
//		cout<< "calculating signs : " << str[cs_pos] << endl;
//		cout<< "num[0] = " << num[0] << endl; 
//		cout<< "num[1] = " << num[1] << endl;
		
		switch(str[cs_pos]){
			case '+':
				
				if (pos == 0 || pos == 1) //  x + num[0] = num[1] , num[0] + x = num[1]
					cout<< fixed << setprecision(1) << (double)(num[1] - num[0]) << endl; 
				else                      // num[0] + num[1] = x
					cout<< fixed << setprecision(1) << (double)(num[1] + num[0]) << endl; 
				
				break;	
			case '-':
				
				if (pos == 0)      // x - num[0] = num[1]
					cout<< fixed << setprecision(1) << (double)(num[1] + num[0]) << endl; 
				else                // num[0] - x = num[1] , num[0] - num[1] = x
					cout<< fixed << setprecision(1) << (double)(num[0] - num[1]) << endl; 
				
				break;			
			case '*':
				
				if (pos == 0 || pos == 1)      // x * num[0] = num[1] , num[0] * x = num[1]
					cout<< fixed << setprecision(1) << (double)(num[1] / num[0]) << endl; 
				else                           // num[0] * num[1] = x
					cout<< fixed << setprecision(1) << (double)(num[0] * num[1]) << endl; 
				
				break;	
			case '/':
				
				if (pos == 0)      // x / num[0] = num[1]
					cout<< fixed << setprecision(1) << (double)(num[1] * num[0]) << endl; 
				else                // num[0] / x = num[1] , num[0] / num[1] = x
					cout<< fixed << setprecision(1) << (double)(num[0] / num[1]) << endl; 
			
				break;
			default:
				break;	
											
		}	
	}

	return 0;
}

