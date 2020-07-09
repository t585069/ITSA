#include <iostream>
#include <cstring>
using namespace std;

// 質數判別

int main(){
	int i=0, n=0, len=0, tmp=0;
	bool flag=1; // 預設是質數 
	string str;
		
	while(cin >> str){
		if(str == "\0" || str == "\n")
			break;
		
	// 處理字串	
		len = str.size();
		tmp = 0;
		for(i=0; i<len; i++){
			if(str[i] >= '0' && str[i] <= '9')
				tmp = tmp*10 + (str[i]-48);
					 
		}
			
		n = tmp;
		flag=1; // 預設是質數 
		for(i=2; i<n; i++){		
			if(n % i == 0){ 
				flag = 0; // 找到因數 			
				break;			
			}	
		}
		
		if(flag == 0 || n == 1)
			cout << "NO" << endl;
		else 
			cout << "YES" << endl;	
	}
	

	return 0;
}

