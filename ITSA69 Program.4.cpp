#include <iostream>
#include <cstring>
#include <string.h> 
using namespace std;

int main(){
	int i=0, j=0, k=0, n=0, cnt=0, tcnt=0;
	string str;
	
	
	cin >> n;
	for(i=0; i<n; i++){
		
		cin >> str;
		
//		cout<< "str.size() = " << str.size() << endl;
		char ans[1000], tmp[1000];
		
		memset(ans, 0, sizeof ans);
		memset(tmp, 0, sizeof tmp);
		
		for(j=0; j<str.size(); j++){
			ans[j] = str[j];
		}
	//	cout<<endl; 	
		
		ans[j] = '\0';
		
		j=0;
		cnt = str.size();
		while(ans[j]){
			 
			switch(ans[j]){
				case 'a': 		
				// �r����� 
				// ���o����r��	
					tcnt = 0; 
					for(k=cnt-1; k>j; k--){
						tmp[tcnt] = ans[k]; 
						tcnt++;
					}
					
				// �q a ���U�@�� �}�l���N
					for(k=0; k<tcnt; k++){
						ans[j + (k+1)] = tmp[k];  
					}	
					
					break;
				case 'b': 
				
				// �r��ƻs�A�ñ��W��r��
				// �ƻs��r�ꪺ ans[j+1] ~ ans[cnt-1] 	
					tcnt = cnt; 
					for(k=j+1; k<tcnt; k++){
						ans[cnt] = ans[k];
						cnt++;
					}
					ans[cnt] = '\0';			
					
					break;
				case 'c': 
				
				// c �᭱�R�� 2 �Ӧr�� 
					for(k=j+1; k<cnt-2; k++){
						ans[k] = ans[k+2];
					}
					cnt -= 2;
					ans[k] = ans[k+1] = '\0';
					
					break;
				default:	
					break;			
			}
			
			j++;	
		}

		cout<< ans <<endl;				
	}

	return 0;
}


