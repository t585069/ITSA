#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double top=0, bottom=0, high=0;
	
	cin>>top>>bottom>>high; // ��J�W���B�U���B�� 
	cout<<"Trapezoid area:"<<fixed<<setprecision(1)<<(top+bottom)*high/2<<endl; // �p���έ��n 
	
	return 0;
}

