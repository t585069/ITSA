#include <iostream>
#include <cstring>
using namespace std;

// 線段切割

int main(){
	int i=0, j=0, n=0;
	
	while(cin >> n){
		
		int lensum=0, cnt=0; // len：目前欲分割的線段長度 		
		
	// 從線段長度 1 往上加 1 + 2 + 3 ... 直到 總長度 lensum > n	
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

