#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double top=0, bottom=0, high=0;
	
	cin>>top>>bottom>>high; // 輸入上底、下底、高 
	cout<<"Trapezoid area:"<<fixed<<setprecision(1)<<(top+bottom)*high/2<<endl; // 計算梯形面積 
	
	return 0;
}

