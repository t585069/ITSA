#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int i=0, j=0, k=0, n=0;
	
	cin >> n;
	int p[n][n]={0}, maxp[n+1]={0};
	bool pairboy[n]={0}, pairgirl[n]={0};
	
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			cin >> p[i][j];
		}
	}
	
// �}�l�t��	
	k=n;
	while(k--){
		maxp[0] = 0;
		for (i = 0; i < n; i++){
			for (j = 0; j < n; j++){
			// �n�P�׳̰����զX 
				if(p[i][j] > maxp[0] && !pairboy[i] && !pairgirl[j]){
					maxp[0] = p[i][j];
					maxp[1] = i;
					maxp[2] = j;
					
				}
			}
		}
	
	// �w�t��
		pairboy[maxp[1]] = 1;  
		pairgirl[maxp[2]] = 1;
	
	// �M���n�P��	
		p[maxp[1]][maxp[2]] = 0;
				
		cout << "boy " << maxp[1]+1 << " pair with girl " << maxp[2]+1 <<endl;	
	}

	return 0;
}

