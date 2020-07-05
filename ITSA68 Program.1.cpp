#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int i=0, j=0, letter[26][2], cnt=0;
	string str;
	
	while(getline(cin, str)){
		
		memset(letter, 0, sizeof letter);
				
		if((str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= 'a' && str[0] <= 'z'))
			cnt = 1;
			
		for(i=0; i<str.size(); i++){
					
			if(str[i] >= 'A' && str[i] <= 'Z'){
					
				letter[str[i] - 65][0]++;
					
			}else if (str[i] >= 'a' && str[i] <= 'z'){
					
				letter[str[i] - 97][1]++;
					
			}else if(str[i] == ' ' || str[i] == '\t')
				cnt++;		
			
		}
		
		cout<< cnt << endl;
		for(i=0; i<26; i++){
			
			if(letter[i][0] != 0)	
				cout<< (char)(i+65) << " : " << letter[i][0] << endl;
				
			if(letter[i][1] != 0)
				cout<< (char)(i+97) << " : " << letter[i][1] << endl;
		}
		
	}
		

	return 0;
}

