#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int i=0, n=0;
	int x1=0, y1=0, x2=0, y2=0, x3=0, y3=0, x4=0, y4=0;
	double dis1_2=0, dis1_3=0, dis1_4=0, len=0, inner=0, area[2]={0};
	
	cin>>n; // ���� 
	for (i=0; i<2; i++){
		cin>> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	
	//	�y�� * ����		
		x1 *= n;
		y1 *= n;
		
		x2 *= n;
		y2 *= n;
		
		x3 *= n;
		y3 *= n;
		
		x4 *= n;
		y4 *= n;
	
	// �p�� p1 �� p2 p3 p4 ���Z�� 
		dis1_2 = pow(x1-x2, 2) + pow(y1-y2, 2);
			
		dis1_3 = pow(x1-x3, 2) + pow(y1-y3, 2);
			
		dis1_4 = pow(x1-x4, 2) + pow(y1-y4, 2);
	
	// �P�_�|��O�_�ۦP 
	// �Y�_�l�y�Ш�۾F���I�����׬ۦP 
	// �A�q����I��۾F���I�����׬O�_�ۦP �B �|����פ@��
	// �̫�A�P�_�O�_���@�Ӫ��� 
	
		if (dis1_2 == dis1_3){
			len = dis1_2;
		 
			dis1_2 = pow(x4-x2, 2) + pow(y4-y2, 2);	
			dis1_3 = pow(x4-x3, 2) + pow(y4-y3, 2);
		
		// ���n	x1x2 + y1y2
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
			area[i] = 0; // ���O����� 		
					
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

