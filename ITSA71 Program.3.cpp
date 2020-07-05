#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

// 最長"單調"遞減子序列 (單調： 子序列的所有數字可為相同的數字 ) : 
int LDS[51], pre[51]; // LDS[i]:從 0 ~ i 的最大 LDS 長度  
					   // pre： 第 [i+n] 的成員皆記錄 前一個成員位置 
string str;

void Trace(int i){
    if(pre[i] != -1){
        Trace(pre[i]);
    }
    cout << str[i];
}

int main(){
	int i=0, j=0, n=0;
	
	while(cin >> str){

		for(i=0; i<51; i++){
			LDS[i] = 1; // 所有長度預設為 1
			pre[i] = -1; // 預設 前一個成員位置 為 -1(沒有) 
		} 
					
		int mx=0, pos=0, len = str.size();
		
		for(i=0; i<len; i++){
			for(j=i+1; j<len; j++){
			// 找 [i] 與 [i+n] 有沒有遞減的數字	
				if(str[i] >= str[j]){
				// LDS[i]+1 == LDS[j] 表示：遇到 前面子序列 在同一個位置 有 相同LDS長度 ex: 5621: "521" "621" 
					if(LDS[i] + 1 >= LDS[j]){
						LDS[j] = LDS[i] + 1;
						pre[j] = i; // 記錄前一個成員 
					}
				}	
			}
		// 記錄 最長 LDS 和 最後一個成員 
			if(LDS[i] >= mx){
				mx = LDS[i];
				pos = i;
			}
			
		}
		
		Trace(pos); // 從 tail 追蹤到 head 
        cout <<endl;
		
	}

	return 0;
}

