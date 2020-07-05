#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int grid[101][101] = {0};
bool vis[101][101] = {0};
const int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int m=0, n=0;

int DFS(int x, int y){
	int i=0, j=0, sum=0, nx=0, ny=0;
	
	vis[x][y] = 1;
	sum = grid[x][y];

// �ˬd�|�Ӥ�V 
	for(i=0; i<4; i++){
		nx = x + dir[i][0];
		ny = y + dir[i][1];
		
	// �W�X�d�� �� �I�쨫�D �� �w���X�L�A�K���A���� ����V�~�� 
		if(nx >= n || nx < 0 || ny >= m || ny < 0 || grid[nx][ny] == 0 || vis[nx][ny]) 
			continue;
			
		sum += DFS(nx, ny); // �b�@���Ф����Ҧ��g�a���ΨU�צb�ۥ[ 
			
	}
	
	return sum;
}

int main(){
	int i=0, j=0, cnt=0, maxsum=0;
	
	cin >> m >> n ; // N*M ���� M��A�C�榳N��
				    // 3 2
				    // 0 0 2
				    // 0 3 5
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			cin >> grid[i][j] ;
		}
	}
	
 
	memset(vis, 0, sizeof vis); // ��l�� 
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
		// �|�����X���A��	
			if(grid[i][j] != 0 && !vis[i][j]){
				cnt++;
				maxsum = max(DFS(i, j), maxsum); // ��̤j�ΨU�� 
			} 
		}
	}
	
	cout << cnt <<endl;
	cout << maxsum <<endl;
	

	return 0;
}

