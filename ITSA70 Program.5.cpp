#include <iostream>
#include <limits.h>
using namespace std;

int main(){
	int i=0, j=0, k=0, n=0, len=0;
	
	cin >> n;
	for(i=0; i<n; i++){
		
		cin >> len;
		int profit[len];
		
		
		for(j=0; j<len; j++)
			cin >> profit[j] ;
		
		int max = INT_MIN, sum=0; // INT_MIN�Gint �� �̤p��	
		for(j=0; j<len; j++){
			
			sum = profit[j] + sum;
			
			
			if(sum > max)
				max = sum; // ��s max profit 
			
			if(sum < 0) 
				sum = 0; // �u�n�O�t���k 0 ���s�ֿn 

		}
		
		cout<< max << endl;
		
		
	}
	
	return 0;
}

