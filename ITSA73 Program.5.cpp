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

// 檢查四個方向 
	for(i=0; i<4; i++){
		nx = x + dir[i][0];
		ny = y + dir[i][1];
		
	// 超出範圍 或 碰到走道 或 已拜訪過，便不再延伸 換方向繼續 
		if(nx >= n || nx < 0 || ny >= m || ny < 0 || grid[nx][ny] == 0 || vis[nx][ny]) 
			continue;
			
		sum += DFS(nx, ny); // 在一塊田內找到所有土地的肥沃度在相加 
			
	}
	
	return sum;
}

int main(){
	int i=0, j=0, cnt=0, maxsum=0;
	
	cin >> m >> n ; // N*M 網格 M行，每行有N個
				    // 3 2
				    // 0 0 2
				    // 0 3 5
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			cin >> grid[i][j] ;
		}
	}
	
 
	memset(vis, 0, sizeof vis); // 初始化 
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
		// 尚未拜訪的農田	
			if(grid[i][j] != 0 && !vis[i][j]){
				cnt++;
				maxsum = max(DFS(i, j), maxsum); // 找最大肥沃度 
			} 
		}
	}
	
	cout << cnt <<endl;
	cout << maxsum <<endl;
	

	return 0;
}

