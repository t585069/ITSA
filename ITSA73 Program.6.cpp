#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


// 讓 sort()由大到小 
bool cmp(int a,int b){
    return a > b;
}


int main(){
	int i=0, j=0, n=0, m=0, max=0, pct=0, tax=0;
	
	cin >> n ;
	int sum[n]={0};
	for(i=0; i<n; i++){
		cin >> m ;
		int data[m];
		
		for(j=0; j<m; j++)
			cin>>data[j];
			
	// 排序
		sort(data, data+m, cmp);
		max = data[0];
	// 計算總稅金		
		for(j=0; j<m; j++){
			if (data[j] == max){
				
				tax = ceil((double)data[j] * 0.4);
				sum[i] += tax; // 最大的稅金 40% 
				continue;
				
			}else if(data[j] == data[j-1]){
				sum[i] += tax;
				continue;
			}
			
			pct = ceil((double)j/m*100); // 轉 double 讓小數進位 
			if (pct <= 10)
				tax = ceil((double)data[j] * 0.4);
			else if (pct >= 11 && pct <= 30)
				tax = ceil((double)data[j] * 0.3);
			else if (pct >= 31 && pct <= 60)
				tax = ceil((double)data[j] * 0.2);
			else if (pct >= 61 && pct <= 80)
				tax = ceil((double)data[j] * 0.1);
			else
				tax = 0;
			
			sum[i] += tax;
						
		}	 
		
	}
	
	for(i=0; i<n; i++)
		cout<<sum[i]<<endl;
			

	return 0;
}

