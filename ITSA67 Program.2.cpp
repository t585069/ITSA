#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int i=0, j=0, n=0;
	
	while(cin >> n){
		
		int lensum=0, cnt=0; // len�G�ثe�����Ϊ��u�q���� 		
		
	// �q�u�q���� 1	���W�[ 1 + 2 + 3 ...���� �`���� lensum > n	
		for(i=1; i<=n; i++){
						
			if(lensum + i > n)
					break;
				
			lensum += i;		
			cnt++;	
				
		}
	
		cout << cnt << endl;
	}
	

	return 0;
}

