#include <iostream>
#include <cstring>
#include <algorithm>
#include <math.h>
using namespace std;

// 過半元素

int main(){
	int i=0, j=0, len=0;
	string str;
	
	
	while(getline(cin, str)){
			
	// 計算 數字個數
		len = 1; 
		for(i=0; i<str.size(); i++){
			if(str[i] == ' ' || str[i] == '\t')
				len++;	
		}
	
	// 處理字串，將 字元 轉成 數字 	
		int num[len];
		bool sign_flag = 1; 
		
		memset(num, 0, sizeof num);
		
		j=0;
		for(i=0; i<str.size(); i++){
			
			if(str[i] >= '0' && str[i] <= '9'){
				
				if(sign_flag == 1)
					num[j] = 10*num[j] + (str[i] - 48); // 正數 
				else
					num[j] = 10*num[j] + (-1)*(str[i] - 48); // 負數 
					
			}else if(str[i] == ' ' || str[i] == '\t'){
				
				j++;
				sign_flag = 1;
				 
			}else if(str[i] == '-')
				sign_flag = 0; // 0 == '-', 1 == '+'			
		}	
		
		
		sort(num, num+len); // 排列由小至大 
		
		int ncnt[len], hlen=0;
		bool half_flag = 0;
					
		hlen = len/2 + 1;	
		ncnt[0] = 1;
		j=0;
		for(i=1; i<len; i++){
			
			if(num[i] == num[i-1])
				ncnt[j]++;
			
		// 超過半數		
			if(ncnt[j] == hlen){
				cout<< num[i] << endl;
				half_flag = 1;
				break;
			}
			
					
			if(num[i] != num[i-1]){
				j++;
				ncnt[j] = 1;
			}		
		}
	
		
		if(len == 1)
			cout<< num[0] << endl;
		else if(!half_flag)
			cout<< "NO" << endl; // 沒有超過半數
		
			
	}
	
	return 0;
}

