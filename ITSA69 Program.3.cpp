#include <iostream>
#include <cstring>
using namespace std;

int num[20], cnt=0;

// nヘ玡タだ秆计
// m竚  
void Divide(int n, int m){
	int i=0;
	
// ┏	
	if(n == 1){
    
	    cnt++;
	    return;
	}
	
	for(i=n-1; i>=1; i--){	
	// 癬翴 ┪ だ计 
		if(m == 0 || i <= num[m-1]){
			
			num[m] = i; // 眔璶だ秆计
			Divide(n-i, m+1); // 眖だ秆 6 = 5 1
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
		cnt =0; // 箇砞 1 贺计セō 
		memset(num, 0, sizeof num);
		
		Divide(n+1, 0); //  Divide()穦タ 6 
		
		cout<< cnt << endl;
	}

	return 0;
}
