#include <iostream>
using namespace std;

int main(){
	int i=0, j=0, n=0, tmp=0, f2i=0;
	
	cin >> n;
	int data[n]={0}, sum[n]={0};
	
	for (i = 0; i < n; i++){
		cin >> data[i];
		
	// �p���ƨñN�U��Ƭۥ[	
		f2i = data[i];
		while(f2i != 0){
			
			tmp = f2i;
			f2i /= 10;		
			sum[i] = sum[i] + (tmp - 10*f2i); // �C�@�����O���Ӧ�� 
					
		}
	}
	
	// �Ƨ�
	for (i = 0; i < n-1; i++){
		for (j = i+1; j < n; j++){	
		// �����`�M 
			if(sum[i] > sum[j]){
				tmp = sum[i];
				sum[i] = sum[j];
				sum[j] = tmp;
				
				tmp = data[i];
				data[i] = data[j];
				data[j] = tmp;
					
			}else if(sum[i] == sum[j]){
			// ��Ʀr�j�p
				if(data[i] > data[j]){
					tmp = data[i];
					data[i] = data[j];
					data[j] = tmp;	
				}	
			}
		} 	
		
	} 
	
	for (i = 0; i < n; i++){
		if(i == n-1){
			cout<<data[i]<<endl;
			break;
		}		
		cout<<data[i]<<" ";		
	}
	
	
	

	return 0;
}
