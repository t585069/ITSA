#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	int i=0, n=0;

	while(cin >> n){
		
		if(n == 0)
			return 0;
		
		double pi=0;
		
		for(i=0; i<n; i++){
			
			pi = pi + pow(-1, i) * (4.0 / (1.0 + 2.0*i));
			
		}	
		
		cout<< fixed << setprecision(5) << pi << endl; 
		
	}
	
	return 0;
}

