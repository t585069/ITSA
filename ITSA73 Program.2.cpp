#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double M=0.0, K=0.0, M1=0, K1=0, M2=0, K2=0;
	
	
	cin>>M1>>K1;
	cin>>M2>>K2;	

// ¥[		
	M = M1 + M2;
	K = K1 + K2;
	cout<<"("<< fixed  <<  setprecision(2) << M <<")+("<< fixed  <<  setprecision(2) << K <<")i"<<endl; 
	
// ´î
	M = M1 - M2;
	K = K1 - K2;
	cout<<"("<< fixed  <<  setprecision(2) << M <<")+("<< fixed  <<  setprecision(2) << K <<")i"<<endl; 
	
// ­¼ 
	M = (M1 * M2) + (-1)*(K1 * K2);
	K = (M1 * K2) + (M2 * K1);
	cout<<"("<< fixed  <<  setprecision(2) << M <<")+("<< fixed  <<  setprecision(2) << K <<")i"<<endl; 

	return 0;
}
