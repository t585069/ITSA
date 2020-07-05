#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	int n=0, i=0, j=0;
	
	cin>>n; // 分成 n 類 
	
	int m[n], cnt[n]={0}; // 每一類有多少隻襪子 
	for(i=0; i<n;i++)
		cin>>m[i];
	
	for(i=0; i<n;i++){
		map<string, int> mp; // 儲存 字串 和 字串數量 
		map<string, int>::iterator itmap; // 用於搜尋移動 
		string str;
		
		for(j=0; j<m[i]; j++){
			cin>>str;
			mp[str]++;
		}
		
		for(itmap = mp.begin(); itmap != mp.end(); itmap++){
		// 該分類中，無法成對的襪子有幾隻	
			if(itmap->second % 2 != 0)
				cnt[i]++;
		}
		
	}
	
	for(i=0; i<n;i++)
		cout<<cnt[i]<<endl;
	
	return 0;
}

