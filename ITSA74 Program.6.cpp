#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	int n=0, i=0, j=0;
	
	cin>>n; // ���� n �� 
	
	int m[n], cnt[n]={0}; // �C�@�����h�ְ����l 
	for(i=0; i<n;i++)
		cin>>m[i];
	
	for(i=0; i<n;i++){
		map<string, int> mp; // �x�s �r�� �M �r��ƶq 
		map<string, int>::iterator itmap; // �Ω�j�M���� 
		string str;
		
		for(j=0; j<m[i]; j++){
			cin>>str;
			mp[str]++;
		}
		
		for(itmap = mp.begin(); itmap != mp.end(); itmap++){
		// �Ӥ������A�L�k���諸���l���X��	
			if(itmap->second % 2 != 0)
				cnt[i]++;
		}
		
	}
	
	for(i=0; i<n;i++)
		cout<<cnt[i]<<endl;
	
	return 0;
}

