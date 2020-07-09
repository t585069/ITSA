#include <iostream>
#include <math.h>
#include <cstring>
#include <algorithm>
using namespace std;

// 陣列元素

int main(){
	int i=0, len=0, tmp=0, arr_cnt=0;
	string str;
	

	getline(cin, str);
	len = str.size(); // 長度

	int arr[len]={0};

// 取出字串中的數字	
	for(i=0; i<len; i++){


		if(str[i] >= '0' && str[i] <= '9'){

			if(i == len-1){
				tmp = str[i] - 48;
				
			}else if(str[i+1] != ' ' || str[i+1] != '\t' || str[i+1] != '\n' || str[i+1] != '\0'){
			// 下一個是數字 
				tmp = tmp*10 + (str[i]-48);
				continue;
			}
			
		}
		
		arr[arr_cnt] = tmp;
		arr_cnt++;
		tmp=0;	
				
	}

	sort(arr, arr+arr_cnt); // 由小到大 
	int num[arr_cnt]={0}, numlen[arr_cnt]={0}, cnt=0;
// 記錄 數字 與 個數	

	for(i=0; i<arr_cnt; i++){

		if(i==0){
			num[cnt] = arr[i];
			numlen[cnt]++;
			continue;
		}
		if(arr[i] == arr[i-1])
			numlen[cnt]++;
		else{
			cnt++;
			num[cnt] = arr[i];
			numlen[cnt]++;
		}
	}

	int half=0, flag=0;
	
	half = ceil((double)cnt / 2);
	for(i=0; i<cnt; i++){
		if(numlen[i] > half){
			cout<< num[i] << endl;
			flag = 1;
		}
			
	}

	if(flag == 0)
		cout<< "n/a" << endl;	
	 

	return 0;
}

