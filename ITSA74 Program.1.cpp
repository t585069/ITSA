#include <iostream>
using namespace std;

// ITSA74 Program.1

int main(){
	long double r=0, n=0, p=0, sum=0, interest=0;
	long int i=0;
	
	cin>>r; // 每期利率 
	cin>>n; // 期數 
	cin>>p; // 每期本金 

	for(i=1; i<=n; i++){
		interest = (sum+p) * r; // 利息	
		sum = sum + p + interest; // 本利和 
	}
	cout<<(long long)sum<<endl;
	 	
	return 0;
}


