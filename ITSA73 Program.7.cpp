#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int grid[101][101]={0};
bool vis[101][101]={0};
const int dir[4][2] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
int n=0, edge=0, obs=0;

int DFS(int x, int y){
	int i=0, cnt = 1, nx=0, ny=0;
	
	vis[x][y] = 1;
	
// �ˬd�|�Ӥ�V�O�_�i�H����
	for(i = 0; i < 4; i++){
		
		nx = x + dir[i][0];
		ny = y + dir[i][1];
		
	// �D�k�y��(�X�k�G1 <= x,y <= edge) �M �w���X	
		if(nx < 1 || nx > edge || ny < 1 || ny > edge || vis[nx][ny])
			continue;
		
		cnt += DFS(nx, ny); // �~�򩵦�	
				
	}	
	
	return cnt;
}



int main(){
	int i=0, j=0;
	
	cin >> n;
	int cnt[n];
	for(i = 0; i < n; i++){
		cin >> edge >> obs;
				
	// ��l��			
		memset(grid, 0, sizeof grid);
		memset(vis, 0, sizeof vis);
		
		int x=0, y=0;
		for(j = 0; j < obs; j++){
			cin >> x >> y; // ��ê�����y�� 
			
			grid[x][y] = vis[x][y] = 1; // �O�� ��ê�� �M ���X
		}
		cin >> x >> y; // MIMI���y��
		cnt[i] = DFS(x, y);
		
	}
	
	for(i = 0; i < n; i++)
		cout<<cnt[i]<<endl;

	return 0;
}

