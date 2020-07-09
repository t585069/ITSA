#include <iostream>
#include <math.h>
using namespace std;

// 骰子擲出正方形

int main(){
	int i=0, n=0;
	int x1=0, y1=0, x2=0, y2=0, x3=0, y3=0, x4=0, y4=0;
	double dis1_2=0, dis1_3=0, dis1_4=0, len=0, inner=0, area[2]={0};
	
	cin>>n; // 倍數 
	for (i=0; i<2; i++){
		cin>> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	
	//	座標 * 倍數		
		x1 *= n;
		y1 *= n;
		
		x2 *= n;
		y2 *= n;
		
		x3 *= n;
		y3 *= n;
		
		x4 *= n;
		y4 *= n;
	
	// 計算 p1 到 p2 p3 p4 的距離 
		dis1_2 = pow(x1-x2, 2) + pow(y1-y2, 2);
			
		dis1_3 = pow(x1-x3, 2) + pow(y1-y3, 2);
			
		dis1_4 = pow(x1-x4, 2) + pow(y1-y4, 2);
	
	// 判斷四邊是否相同 
	// 若起始座標到相鄰兩點的長度相同 
	// 再從對稱點到相鄰兩點的長度是否相同 且 四邊長度一樣
	// 最後，判斷是否有一個直角 
	
		if (dis1_2 == dis1_3){
			len = dis1_2;
		 
			dis1_2 = pow(x4-x2, 2) + pow(y4-y2, 2);	
			dis1_3 = pow(x4-x3, 2) + pow(y4-y3, 2);
		
		// 內積	x1x2 + y1y2
			inner = (x4-x2)*(x4-x3) + (y4-y2)*(y4-y3);
			
			if(dis1_2 == dis1_3 && dis1_2 == len && inner == 0)
				area[i] = dis1_2;
			else
				area[i] = 0;

				
		}else if (dis1_3 == dis1_4){
			len = dis1_3;
				
			dis1_3 = pow(x2-x3, 2) + pow(y2-y3, 2);	
			dis1_4 = pow(x2-x4, 2) + pow(y2-y4, 2);
		
			inner = (x2-x3)*(x2-x4) + (y2-y3)*(y2-y4);
		
			if(dis1_3 == dis1_4 && dis1_3 == len && inner == 0)
				area[i] = dis1_3;
			else
				area[i] = 0;
			
		}else if (dis1_2 == dis1_4){
			len = dis1_2;
			
			dis1_2 = pow(x3-x2, 2) + pow(y3-y2, 2);
			dis1_4 = pow(x3-x4, 2) + pow(y3-y4, 2);
	
			inner = (x3-x2)*(x3-x4) + (y3-y2)*(y3-y4);
	
			if(dis1_2 == dis1_4 && dis1_2 == len && inner == 0)
				area[i] = dis1_2;
			else
				area[i] = 0;
			
			
		}else 
			area[i] = 0; // 不是正方形 		
					
	}
	
	if (area[0] < area[1]){
		if(area[0] == 0)
			cout<<"No"<<endl;
		else
			cout<<"Yes "<<area[0]<<endl;
			
		cout<<"Yes "<<area[1]<<endl;
		cout<<"B"<<endl;
		
	}else if (area[0] > area[1]){
		cout<<"Yes "<<area[0]<<endl;
		
		if(area[1] == 0)
			cout<<"No"<<endl;
		else
			cout<<"Yes "<<area[1]<<endl;
		
		cout<<"A"<<endl;
	}else{
		if(area[0] == 0){
			cout<<"No"<<endl;
			cout<<"No"<<endl;
		}else{
			cout<<"Yes "<<area[0]<<endl;
			cout<<"Yes "<<area[1]<<endl;
		}

		cout<<"Peace"<<endl;	
	}
		
		
	return 0;
}

