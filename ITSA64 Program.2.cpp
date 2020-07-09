#include <iostream>
using namespace std;

// 求最大質數
	
int main(){
	int i=0, j=0, num=0;

	
	while(cin >> num){
		
		for(i=num; i>=2; i--){
							
			int x=2, nPrime_flag=0;
			while(x != i){
				
				if(i % x == 0){
					nPrime_flag = 1;
					break;
				}
				
				x++;
			}
			
			if(nPrime_flag == 0){
				cout << i << endl;
				break;
			}
						
		}
	}
	

	return 0;
}

