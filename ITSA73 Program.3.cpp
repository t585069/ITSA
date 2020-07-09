#include <iostream>
#include<math.h>
#include <iomanip>
using namespace std;

// 垂直的時針分針

int main(){
	int i=0, st_h=0, ed_h=0, h=0, m=0;
	double hh=0, mm=0, deg=0; 
	
	cin>>st_h>>ed_h; // 開始時數 結束時數 


// 以 0 點 為 0 度 ， 360度/60min = 6 度/min	
// st_h ed_h轉 min，每次 i++ 代表過了 1 min 
	for(i = st_h*60; i <= ed_h*60; i++){
	
	// 目前位置	
		h = (i/60)%12;
		m = i%60;     
		 
		hh = h*30 + m*0.5; // 時針角度 = (h+m/60)*30 度 
		mm = 6*m;         // 分針角度 = 6*m 度
		
		
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

