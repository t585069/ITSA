#include <iostream>
#include <cstring>
using namespace std;

// 暗號轉換

int main(){
	int n=0, i=0, j=0, k=0, num[50]={0}, len=0, ncnt=0, tcnt=0, pcnt=0;
	string istr, tstr;
	
	cin>>n;
	char pstr[n][50]={0};
	
	istr = "\n";
	getline(cin, istr); 
	
	
	for(i=0; i<n; i++){
	// 清除暫存以防 getline()接跳過
		
	// 輸入字串	
		getline(cin, istr);
		
	// 處理字串
		len = istr.size();
		tcnt = 0;
		ncnt = 0;
		for(j=0; j<len; j++){
			if (istr[j] == '\t' || istr[j] == ' ' || istr[j] == 32){
				continue;
			}else if (istr[j] == '\0' || istr[j] == '\n'){
				tstr[tcnt] = '\0';
				tcnt++;
				break;
			}else{
				if(istr[j]>='0' && istr[j]<='9'){
					num[ncnt] = istr[j] - 48;
					ncnt++;	
		 		}
				 	
				tstr[tcnt] = istr[j];
				tcnt++;
				
			}
			
		}	

		ncnt = 0;
		pcnt = 0;
		for(j=0; j<tcnt; j++){
			if(tstr[j]>='0' && tstr[j]<='9'){
				num[ncnt] = 0;
				ncnt++;	
			}else if (tstr[j] == '\0'){
				pstr[i][pcnt] = '\0';
				pcnt++;
				
				num[ncnt] = 0;
				tstr[j] = 0;
				break;
			}else{
				pstr[i][pcnt] = tstr[j] + num[ncnt];
				if(pstr[i][pcnt] > 'Z')
					pstr[i][pcnt] -= 26;
				pcnt++;	
			}
			
			tstr[j] = 0;
		}
		
	}
	
	for(i=0; i<n; i++)
		cout<<pstr[i]<<endl;
	
	
	return 0;
}

