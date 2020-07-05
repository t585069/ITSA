#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int i=0, j=0, k=0, n=0, m=0, len=0, sp_flag = 0;
	string girl;

	
	cin >> n;
	for(i=0; i<n; i++){
		
		cin >> len ;
		cin >> girl ;
	
		int unlike[len], x=0, y=0;
		char type;
		
 	
		do{
			cin >> m; 
			memset(unlike, 0, sizeof unlike);
			
			switch(m){
				case 1:
				// 沒興趣的類別 
					for(j=0; j<2; j++){
						
						cin >> type;

						for(k=0; k<len; k++){
							if(type == girl[k]){
								unlike[k] = 1;	
							}		
						}		
					}
					
					break;
				case 2:
					
					cin >> x ;
					cin >> y ;
					
					for(k=x-1; k<=y-1; k++)	
						unlike[k] = 1;
					
					break;
				case 3:
					
					cin >> x ;
					cin >> y ;
					
					for(k=x-1; k<=y-1; k++)		
						unlike[k] = 1;
					
					cin >> type ;
					
					for(k=0; k<len; k++){
						if(type == girl[k])
							unlike[k] = 1;		
					}	
					
					break;
				default:
					break;				
			}	
			
			if(m==0)
				break;
			
			sp_flag = 0;
			for(k=0; k<len; k++){

				if(unlike[k] == 1){
					if(sp_flag == 0){
						cout << k+1 ;
						sp_flag = 1;
					}else
						cout << " " << k+1 ;
				
				}

			}
			cout<<endl;
			
		}while(m != 0);				
	}
	
	return 0;
}

