#include <iostream>
#include <cstring>
using namespace std;

// 正整數分解

int num[20], cnt=0;

// n：目前正在分解的數字
// m：位置  
void Divide(int n, int m){
	int i=0;
	
// 到底	
	if(n == 1){
    
	    cnt++;
	    return;
	}
	
	for(i=n-1; i>=1; i--){	
	// 起點 或 分出去的數字 
		if(m == 0 || i <= num[m-1]){
			
			num[m] = i; // 取得要分解的數字
			Divide(n-i, m+1); // 從小分解到大 6 = 5 1
							  //                  1 -> cnt++ 
							  //                  5 -> 3 2 
							  //                       2 -> 1 -> cnt++
							  //                       3 -> 2 -> 1 -> cnt++							  		
		}				
	}	
}



int main(){
	int i=0, n=0;
	
	while(cin >> n){
		cnt =0; // 預設 1 種為數字本身 
		memset(num, 0, sizeof num);
		
		Divide(n+1, 0); // 到 Divide()會修正回 6 
		
		cout<< cnt << endl;
	}

	return 0;
}
