#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

// �̪�"���"����l�ǦC (��աG �l�ǦC���Ҧ��Ʀr�i���ۦP���Ʀr ) : 
int LDS[51], pre[51]; // LDS[i]:�q 0 ~ i ���̤j LDS ����  
					   // pre�G �� [i+n] �������ҰO�� �e�@�Ӧ�����m 
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
			LDS[i] = 1; // �Ҧ����׹w�]�� 1
			pre[i] = -1; // �w�] �e�@�Ӧ�����m �� -1(�S��) 
		} 
					
		int mx=0, pos=0, len = str.size();
		
		for(i=0; i<len; i++){
			for(j=i+1; j<len; j++){
			// �� [i] �P [i+n] ���S������Ʀr	
				if(str[i] >= str[j]){
				// LDS[i]+1 == LDS[j] ��ܡG�J�� �e���l�ǦC �b�P�@�Ӧ�m �� �ۦPLDS���� ex: 5621: "521" "621" 
					if(LDS[i] + 1 >= LDS[j]){
						LDS[j] = LDS[i] + 1;
						pre[j] = i; // �O���e�@�Ӧ��� 
					}
				}	
			}
		// �O�� �̪� LDS �M �̫�@�Ӧ��� 
			if(LDS[i] >= mx){
				mx = LDS[i];
				pos = i;
			}
			
		}
		
		Trace(pos); // �q tail �l�ܨ� head 
        cout <<endl;
		
	}

	return 0;
}

