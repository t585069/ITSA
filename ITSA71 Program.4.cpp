#include <iostream>  
using namespace std;  
  
int main(){  
    int i=0, j=0, n=0;  
      
    while(cin >> n){  
          
        int s[n+2], t[n+2]; // S(1) ~ S(n)   
          
        s[1] = 1;  
        t[1] = 2;  
        for(i=2; i<=n; i++){  
            s[i] = s[i-1] + t[i-1]; // S(n) = S(n-1) + T(n-1) , n>1  
            t[i] = t[i-1] + 1; // T(n) �� S(n) �����s�b���Ʀr   
              
            bool noNum_flag=1;  
        // �ˬd�O�_�� S �����Ʀr   
            while(noNum_flag){  
            // �� S(1) ~ S(n) ���S��  
                noNum_flag = 0;   
                for(j=1; j<=i; j++){  
                      
                    if(t[i] == s[j]){  
                        t[i]++; // �O S �����Ʀr�At[i]+1 �~��� S  
                        noNum_flag = 1;  
                        break;  
                    }  
                }             
            }  
        }  
        cout<< s[n] << endl;      
    }  
  
    return 0;  
}

