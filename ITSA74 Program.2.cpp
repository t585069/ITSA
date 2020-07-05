#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double x=0, y=0, dis=0;
	int n=0, i=0;
	
	cin>>n; // 戈计 
	int point[n];
	
	
	for(i=0; i<n; i++){
		cin>>x>>y; // 甮い畒夹 
		
		dis = (10-x)*(10-x)+(10-y)*(10-y);
		dis = sqrt(dis);
		if (dis >= 0 && dis <= 1)
			point[i] = 10; // 甮い A 跋办
		else if (dis > 1 && dis <= 2)
			point[i] = 9; // 甮い B 跋办
		else if (dis > 2 && dis <= 3)
			point[i] = 8; // 甮い C 跋办
		else if (dis > 3 && dis <= 4)
			point[i] = 7; // 甮い D 跋办
		else if (dis > 4 && dis <= 5)
			point[i] = 6; // 甮い E 跋办
		else if (dis > 5 && dis <= 6)
			point[i] = 5; // 甮い F 跋办
		else if (dis > 6 && dis <= 7)
			point[i] = 4; // 甮い G 跋办
		else if (dis > 7 && dis <= 8)
			point[i] = 3; // 甮い H 跋办
		else if (dis > 8 && dis <= 9)
			point[i] = 2; // 甮い I 跋办
		else if (dis > 9 && dis <= 10)
			point[i] = 1; // 甮い J 跋办
		else
			point[i] = 0; // 禬跋办 

			
	}
	
	for(i=0; i<n; i++)
		cout<<point[i]<<endl;
	
	
	return 0;
}

