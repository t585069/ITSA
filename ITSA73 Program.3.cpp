#include <iostream>
#include<math.h>
#include <iomanip>
using namespace std;

int main(){
	int i=0, st_h=0, ed_h=0, h=0, m=0;
	double hh=0, mm=0, deg=0; 
	
	cin>>st_h>>ed_h; // �}�l�ɼ� �����ɼ� 


// �H 0 �I �� 0 �� �A 360��/60min = 6 ��/min	
// st_h ed_h�� min�A�C�� i++ �N��L�F 1 min 
	for(i = st_h*60; i <= ed_h*60; i++){
	
	// �ثe��m	
		h = (i/60)%12;
		m = i%60;     
		 
		hh = h*30 + m*0.5; // �ɰw���� = (h+m/60)*30 �� 
		mm = 6*m;         // ���w���� = 6*m ��
		
		
		deg = fabs(hh - mm);
		if(deg > 180)
			deg = 360.0 - deg;
		
		if(deg >= 88 && deg <= 92){
			if(i/60 < 10)
				cout<<"0";
			cout<< i/60 <<":";
			
			if(m < 10)
				cout<<"0";
			
			cout<< m <<" degree="<< fixed << setprecision(2) << deg <<endl;
		}	
	}

	return 0;
}

