#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double x=0, y=0, dis=0;
	int n=0, i=0;
	
	cin>>n; // ��Ƽ� 
	int point[n];
	
	
	for(i=0; i<n; i++){
		cin>>x>>y; // �g���y�� 
		
		dis = (10-x)*(10-x)+(10-y)*(10-y);
		dis = sqrt(dis);
		if (dis >= 0 && dis <= 1)
			point[i] = 10; // �g�� A �ϰ�
		else if (dis > 1 && dis <= 2)
			point[i] = 9; // �g�� B �ϰ�
		else if (dis > 2 && dis <= 3)
			point[i] = 8; // �g�� C �ϰ�
		else if (dis > 3 && dis <= 4)
			point[i] = 7; // �g�� D �ϰ�
		else if (dis > 4 && dis <= 5)
			point[i] = 6; // �g�� E �ϰ�
		else if (dis > 5 && dis <= 6)
			point[i] = 5; // �g�� F �ϰ�
		else if (dis > 6 && dis <= 7)
			point[i] = 4; // �g�� G �ϰ�
		else if (dis > 7 && dis <= 8)
			point[i] = 3; // �g�� H �ϰ�
		else if (dis > 8 && dis <= 9)
			point[i] = 2; // �g�� I �ϰ�
		else if (dis > 9 && dis <= 10)
			point[i] = 1; // �g�� J �ϰ�
		else
			point[i] = 0; // �W�X�ϰ� 

			
	}
	
	for(i=0; i<n; i++)
		cout<<point[i]<<endl;
	
	
	return 0;
}

