#include <iostream>
#include <cstring>
using namespace std;

int num[20], cnt=0;

// n�G�ثe���b���Ѫ��Ʀr
// m�G��m  
void Divide(int n, int m){
	int i=0;
	
// �쩳	
	if(n == 1){
    
	    cnt++;
	    return;
	}
	
	for(i=n-1; i>=1; i--){	
	// �_�I �� ���X�h���Ʀr 
		if(m == 0 || i <= num[m-1]){
			
			num[m] = i; // ���o�n���Ѫ��Ʀr
			Divide(n-i, m+1); // �q�p���Ѩ�j 6 = 5 1
							  //                    1 -> cnt++ 
							  //                  5 -> 3 2 
							  //                         2 -> 1 -> cnt++
							  //                       3 -> 2 -> 1 -> cnt++							  		
		}				
	}	
}



int main(){
	int i=0, n=0;
	
	while(cin >> n){
		cnt =0; // �w�] 1 �ج��Ʀr���� 
		memset(num, 0, sizeof num);
		
		Divide(n+1, 0); // �� Divide()�|�ץ��^ 6 
		
		cout<< cnt << endl;
	}

	return 0;
}
