#include <iostream>
#include <string>
using namespace std;

// 星座查詢

int main(){
	int i=0, n=0;
	char c[4];
	
	cin >> n;
	for(i=0; i<n; i++){
		
		cin >> c[0] >> c[1]; 
		cin >> c[2] >> c[3];
		
		int m=0, d=0;
		
		m = (c[0]-48)*10 + c[1] - 48;
		d = (c[2]-48)*10 + c[3] - 48;
		
		if ((m == 1 && d >= 21) || (m == 2 && d <= 18))
			cout << "Aquarius" << endl;
		else if ((m == 2 && d >= 19) || (m == 3 && d <= 20))
			cout << "Pisces" << endl;
		else if ((m == 3 && d >= 21) || (m == 4 && d <= 20))
			cout << "Aries" << endl;
		else if ((m == 4 && d >= 21) || (m == 5 && d <= 21))
			cout << "Taurus" << endl;
		else if ((m == 5 && d >= 22) || (m == 6 && d <= 21))
			cout << "Gemini" << endl;
		else if ((m == 6 && d >= 22) || (m == 7 && d <= 22))
			cout << "Cancer" << endl;
		else if ((m == 7 && d >= 23) || (m == 8 && d <= 23))
			cout << "Leo" << endl;
		else if ((m == 8 && d >= 24) || (m == 9 && d <= 23))
			cout << "Virgo" << endl;
		else if ((m == 9 && d >= 24) || (m == 10 && d <= 23))
			cout << "Libra" << endl;
		else if ((m == 10 && d >= 24) || (m == 11 && d <= 22))
			cout << "Scorpio" << endl;
		else if ((m == 11 && d >= 23) || (m == 12 && d <= 21))
			cout << "Sagittarius" << endl;
		else if ((m == 12 && d >= 22) || (m == 1 && d <= 20))
			cout << "Capricorn" << endl;
	
	}
	

	return 0;
}

