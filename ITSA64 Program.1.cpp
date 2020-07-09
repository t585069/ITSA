#include <iostream>
using namespace std;

// P：通過  M：補考  F：沒過

int main(){
	int i=0, j=0, n=0;
	
	
	cin >> n;	
	
	for(i=0; i<n; i++){
		
		int sum=0, p_flag=0, e_flag=0;
		
		for(j=0; j<3; j++){
			
			int point=0;
			
			cin >> point;
			
			if(point >= 60)
				p_flag++; // 成績 >= 60
				
			if(point >= 80)	 
				e_flag++; // 成績 >= 80
			
			sum += point;
			
		}
		
		
		if (p_flag == 3 || (p_flag == 2 && sum >= 220))
			cout << "P" << endl;
		else if ((p_flag == 2 && sum < 220) || (p_flag == 1 && e_flag == 1))  
			cout << "M" << endl; 
		else
			cout << "F" << endl; 
	}
	

	return 0;
}

