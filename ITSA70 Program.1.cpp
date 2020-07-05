#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;

int main(){
	int i=0, j=0, row=0, col=0;
	
	while(cin >> row >> col){
		int m[row][col]={0};
		
		
		memset(m, 0, sizeof m);
		for(i=0; i<row; i++){
			for(j=0; j<col; j++)
				cout<<m[i][j]<<" ";
			cout<<endl;
		}
			
		
		for(i=0; i<row; i++)
			for(j=0; j<col; j++)
				cin >> m[i][j];
				
		for(i=0; i<col; i++){
			for(j=0; j<row; j++){
				if(j == row-1){
					cout<< m[j][i] << endl;
					break;
				}
				cout<< m[j][i] << " ";
			}

		}
		
	}

	return 0;
}

