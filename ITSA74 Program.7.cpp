#include <iostream>
using namespace std;

int main(){
	int i=0, j=0, k=0, l=0, m[8][8]={0}, cnt=0;
	int x1=0, y1=0, x2=0, y2=0, legal_flag[8][8]={0};
	const int dir[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {0, -1}, {1, 1}, {1, 0}, {1, -1}}; // �K�Ӥ�V 
	
	for(int i = 0; i < 8; ++i)
        for(int j = 0; j < 8; ++j)
            cin >> m[i][j];       
        
    for(i = 0; i < 8; ++i){
        for(j = 0; j < 8; ++j){
        
		// �D�ťթΤw�O�������L   
			if(m[i][j] != 0 || legal_flag[i][j] == 1)
            	continue;
    
        // ������V���դl 	
            for(k=0; k<8; k++){
            	x1 = i + dir[k][0];
            	y1 = j + dir[k][1];
            		
            // �D�k�y�� 
            	if(x1 < 0 || x1 >= 8 || y1 < 0 || y1 >= 8 )
            		continue;
            	
			// �դl 
            	if(m[x1][y1] == 2){
				// ������V���¤l
					for(l=1; l<7; l++){
						x2 = x1 + l*dir[k][0];
            			y2 = y1 + l*dir[k][1];	
            				
						
						if(x2 < 0 || x2 >= 8 || y2 < 0 || y2 >= 8)
            				continue;
            			else if (m[x2][y2] == 0) // �]����ťդ��X�k	 
            				break;
            					
            		// ���¤l 
		            	if(m[x2][y2] == 1){
		            			
		            		if(legal_flag[i][j] == 0){
		            			legal_flag[i][j] = 1; // �O���X�k�B���קK���ƭp��
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
