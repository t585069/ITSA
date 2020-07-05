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
				// 字串反轉 
				// 取得反轉字串	
					tcnt = 0; 
					for(k=cnt-1; k>j; k--){
						tmp[tcnt] = ans[k]; 
						tcnt++;
					}
					
				// 從 a 的下一個 開始取代
					for(k=0; k<tcnt; k++){
						ans[j + (k+1)] = tmp[k];  
					}	
					
					break;
				case 'b': 
				
				// 字串複製，並接上原字串
				// 複製原字串的 ans[j+1] ~ ans[cnt-1] 	
					tcnt = cnt; 
					for(k=j+1; k<tcnt; k++){
						ans[cnt] = ans[k];
						cnt++;
					}
					ans[cnt] = '\0';			
					
					break;
				case 'c': 
				
				// c 後面刪除 2 個字元 
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


