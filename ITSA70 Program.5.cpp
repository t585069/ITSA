#include <iostream>
#include <limits.h>
using namespace std;

// 尋找最大區間

int main(){
	int i=0, j=0, k=0, n=0, len=0;
	
	cin >> n;
	for(i=0; i<n; i++){
		
		cin >> len;
		int profit[len];
		
		
		for(j=0; j<len; j++)
			cin >> profit[j] ;
		
		int max = INT_MIN, sum=0; // INT_MIN：int 的 最小值	
		for(j=0; j<len; j++){
			
			sum = profit[j] + sum;
			
			
			if(sum > max)
				max = sum; // 更新 max profit 
			
			if(sum < 0) 
				sum = 0; // 只要是負的歸 0 重新累積 

		}
		
		cout<< max << endl;
		
		
	}
	
	return 0;
}

