#include <iostream>
using namespace std;

// ITSA74 Program.1

int main(){
	long double r=0, n=0, p=0, sum=0, interest=0;
	long int i=0;
	
	cin>>r; // �C���Q�v 
	cin>>n; // ���� 
	cin>>p; // �C������ 

	for(i=1; i<=n; i++){
		interest = (sum+p) * r; // �Q��	
		sum = sum + p + interest; // ���Q�M 
	}
	cout<<(long long)sum<<endl;
	 	
	return 0;
}


