#include <iostream>
using namespace std;

int main(){
	double i=0, n=0;
	double x=0;
	string str = "141592653589793238";
	
	cin >> n;
	int ni; // 輸出近似值 X 小數點後的第 ni 個數字 
	for(i=0; i<n; i++){
		cin >> ni ;
		cout<< str[ni-1] << endl;	
	}

/*	
// X 做	100000 次的近似值
 
	double k = 1000000; 
	for(i=0; i<k; i++){
		x = x + ((double)pow(-1, i) / (2.0*i + 1.0));
	} 
	
//	x = x * 4;
*/	
	
	return 0;
}

