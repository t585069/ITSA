#include <iostream>
#include <algorithm> 
using namespace std;

int main(){
	int i=0, j=0, n=0, num=0, tgt=0, gcd=0;
	
	cin >> n;
	int YN_flag[n]={0};
	for(i=0; i<n; i++){
		cin >> num >> tgt;
		int cap[num]={0};
		
		for(j=0; j<num; j++)
			cin >> cap[j];
			
	// �� gcd �D�Ҧ��e�����̤j���]�ơA�i�H�㰣�N�� YES
		gcd = cap[0];
		for(j=1; j<num; j++){
			
			gcd = __gcd(gcd, cap[j]);
			
		} 	
		
		if(tgt % gcd == 0)
			YN_flag[i] = 1; // �i�q�X�ؼФ��q 
		
	}
	
	for(i=0; i<n; i++){
		if(YN_flag[i] == 1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;	
	} 
	

	return 0;
}

