#include <iostream>
#include <cstring>
using namespace std;

// 18啦點數計算

int main(){
	int i=0, j=0, n[4], dice[6];
	
	while(cin >> n[0] >> n[1] >> n[2] >> n[3]){
		
		memset(dice, 0, sizeof dice);
		
		for(i=0; i<4; i++){
			for(j=0; j<6; j++){				
				if(n[i] == j+1){
					dice[j]++;
					break;
				}
	
			}
		}
		
		int cnt=0, sum=0, pair_max=0, pair_cnt=0, exit_flag=0;
		for(i=0; i<6; i++){	
			
			if(dice[i] != 0)		
				cnt++;
			
			if(dice[i] == 4){
					
				cout<< "WIN" << endl;
				exit_flag = 1;
					
				break;	
			}else if(dice[i] == 3 || cnt == 4){
					
				cout<< "R" << endl;
				exit_flag = 2;	
				break;
			}		
				
		// 計算 pair 數量
			if(dice[i] != 0){
				if(dice[i] % 2 == 0){	
					pair_max = (i+1) * 2;
					pair_cnt++;	
				}
				
				sum += (i+1) * dice[i]; // 計算點數總和 
			}						
		}
		
		if(exit_flag == 0){
			if(pair_cnt == 2)
				cout << pair_max << endl; // 有兩對，輸出 max pair
			else if(pair_cnt == 1)
				cout<< sum - pair_max << endl; // 只有一對，sum - pair
			             	
		}
	}
	

	return 0;
}

