#include <iostream>
using namespace std;

int main(){
	int i=0, j=0, k=0, l=0, m[8][8]={0}, cnt=0;
	int x1=0, y1=0, x2=0, y2=0, legal_flag[8][8]={0};
	const int dir[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {0, -1}, {1, 1}, {1, 0}, {1, -1}}; // 八個方向 
	
	for(int i = 0; i < 8; ++i)
        for(int j = 0; j < 8; ++j)
            cin >> m[i][j];       
        
    for(i = 0; i < 8; ++i){
        for(j = 0; j < 8; ++j){
        
		// 非空白或已記錄都跳過   
			if(m[i][j] != 0 || legal_flag[i][j] == 1)
            	continue;
    
        // 延伸方向找到白子 	
            for(k=0; k<8; k++){
            	x1 = i + dir[k][0];
            	y1 = j + dir[k][1];
            		
            // 非法座標 
            	if(x1 < 0 || x1 >= 8 || y1 < 0 || y1 >= 8 )
            		continue;
            	
			// 白子 
            	if(m[x1][y1] == 2){
				// 延伸方向找到黑子
					for(l=1; l<7; l++){
						x2 = x1 + l*dir[k][0];
            			y2 = y1 + l*dir[k][1];	
            				
						
						if(x2 < 0 || x2 >= 8 || y2 < 0 || y2 >= 8)
            				continue;
            			else if (m[x2][y2] == 0) // 包夾到空白不合法	 
            				break;
            					
            		// 有黑子 
		            	if(m[x2][y2] == 1){
		            			
		            		if(legal_flag[i][j] == 0){
		            			legal_flag[i][j] = 1; // 記錄合法步數避免重複計算
		            			cnt++;
		            			break;
							}			
						}	
					}					
				}
					
			}
        }
    }
    cout<<cnt<<endl;


	return 0;
}
