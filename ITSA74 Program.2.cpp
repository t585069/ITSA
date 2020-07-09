#include <iostream>
#include <math.h>
using namespace std;

// 射飛鏢

int main(){
	double x=0, y=0, dis=0;
	int n=0, i=0;
	
	cin>>n; // 資料數 
	int point[n];
	
	
	for(i=0; i<n; i++){
		cin>>x>>y; // 射中座標 
		
		dis = (10-x)*(10-x)+(10-y)*(10-y);
		dis = sqrt(dis);
		if (dis >= 0 && dis <= 1)
			point[i] = 10; // 射中 A 區域
		else if (dis > 1 && dis <= 2)
			point[i] = 9; // 射中 B 區域
		else if (dis > 2 && dis <= 3)
			point[i] = 8; // 射中 C 區域
		else if (dis > 3 && dis <= 4)
			point[i] = 7; // 射中 D 區域
		else if (dis > 4 && dis <= 5)
			point[i] = 6; // 射中 E 區域
		else if (dis > 5 && dis <= 6)
			point[i] = 5; // 射中 F 區域
		else if (dis > 6 && dis <= 7)
			point[i] = 4; // 射中 G 區域
		else if (dis > 7 && dis <= 8)
			point[i] = 3; // 射中 H 區域
		else if (dis > 8 && dis <= 9)
			point[i] = 2; // 射中 I 區域
		else if (dis > 9 && dis <= 10)
			point[i] = 1; // 射中 J 區域
		else
			point[i] = 0; // 超出區域 

			
	}
	
	for(i=0; i<n; i++)
		cout<<point[i]<<endl;
	
	
	return 0;
}

