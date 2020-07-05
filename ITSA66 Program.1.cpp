#include <iostream>
#include <cstring>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
	int i=0, j=0, len=0;
	string str;
	
	
	while(getline(cin, str)){
			
	// 璸衡 计计
		len = 1; 
		for(i=0; i<str.size(); i++){
			if(str[i] == ' ' || str[i] == '\t')
				len++;	
		}
	
	// 矪瞶﹃盢 じ 锣Θ 计 	
		int num[len];
		bool sign_flag = 1; 
		
		memset(num, 0, sizeof num);
		
		j=0;
		for(i=0; i<str.size(); i++){
			
			if(str[i] >= '0' && str[i] <= '9'){
				
				if(sign_flag == 1)
					num[j] = 10*num[j] + (str[i] - 48); // タ计 
				else
					num[j] = 10*num[j] + (-1)*(str[i] - 48); // 璽计 
					
			}else if(str[i] == ' ' || str[i] == '\t'){
				
				j++;
				sign_flag = 1;
				 
			}else if(str[i] == '-')
				sign_flag = 0; // 0 == '-', 1 == '+'			
		}	
		
		
		sort(num, num+len); // 逼パ 
		
		int ncnt[len], hlen=0;
		bool half_flag = 0;
					
		hlen = len/2 + 1;	
		ncnt[0] = 1;
		j=0;
		for(i=1; i<len; i++){
			
			if(num[i] == num[i-1])
				ncnt[j]++;
			
		// 禬筁计		
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
			cout<< "NO" << endl; // ⊿Τ禬筁计
		
			
	}
	
	return 0;
}

