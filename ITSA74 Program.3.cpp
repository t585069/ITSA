#include <iostream>
using namespace std;

int main(){
	int n=0, m=0, i=0, j=0, data[100]={0}, length[100]={0};
	
	cin>>n; // 戈计 
	int maxL[n] = {0};
	
	for(i=0; i<n; i++){
		cin>>m; // 计计
		
		for(j=0; j<m; j++){
			cin>>data[j];
			length[data[j]] += 1; // 赣计+1 
			
			if(length[data[j]] > maxL[i])
				maxL[i] = length[data[j]];	// 穝程		
		}
		
		for(j=0; j<100; j++){
			data[j] = 0;
			length[j] = 0;	
		}		
	}
	
	for(i=0; i<n; i++)
		cout<<maxL[i]<<endl;
	
	
	return 0;
}

