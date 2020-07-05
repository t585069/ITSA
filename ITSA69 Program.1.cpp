#include <iostream>
using namespace std;

int main(){
	int i=0, n=0;
	string str;
	
	while(cin >> str){
		

		int numL = 10, x1=0, x2=0;
		switch(str[0]) {
		    case 'A':
		        numL = 10;
		        break;
		    case 'B':
		        numL = 11;
		        break;
		    case 'C':
		        numL = 12;
		        break;
		    case 'D':
		        numL = 13;
		        break;
		    case 'E':
		        numL = 14;
		        break;
		    case 'F':
		        numL = 15;
		        break;
		    case 'G':
		        numL = 16;
		        break;
		    case 'H':
		        numL = 17;
		        break;
		    case 'I':
		        numL = 34;
		        break;
		    case 'J':
		        numL = 18;
		        break;
		    case 'K':
		        numL = 19;
		        break;
		    case 'L':
		        numL = 20;
		        break;
			case 'M':
		        numL = 21;
		        break;
		    case 'N':
		        numL = 22;
		        break;
		    case 'O':
		        numL = 35;
		        break;
		    case 'P':
		        numL = 23;
		        break;
		    case 'Q':
		        numL = 24;
		        break;
		    case 'R':
		        numL = 25;
		        break;
		    case 'S':
		        numL = 26;
		        break;
		    case 'T':
		        numL = 27;
		        break;
		    case 'U':
		        numL = 28;
		        break;
		    case 'V':
		        numL = 29;
		        break;
		    case 'W':
		        numL = 32;
		        break;
		    case 'X':
		        numL =30 ;
		        break;
		    case 'Y':
		        numL = 31;
		        break;
		    case 'Z':
		        numL = 33;
		        break;
		    default:
		        break;
		}
		
		x1 = numL / 10; // 十位數
		x2 = numL - 10*x1; // 個位數

		
		int p=0;
		
		p = x1 + (9*x2) + (8*(str[1]-48)) + (7*(str[2]-48)) + (6*(str[3]-48)) 
				+ (5*(str[4]-48)) + (4*(str[5]-48)) + (3*(str[6]-48)) + (2*(str[7]-48)) + (str[8]-48) + (str[9]-48);
//		cout<<" p = " << p << endl;
			
		if(p % 10 == 0)
			cout<< "CORRECT!!!" <<endl;
		else
			cout<< "WRONG!!!" <<endl;		
	}

	return 0;
}

