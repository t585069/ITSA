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
            t[i] = t[i-1] + 1; // T(n) 為 S(n) 中不存在的數字   
              
            bool noNum_flag=1;  
        // 檢查是否為 S 中的數字   
            while(noNum_flag){  
            // 找 S(1) ~ S(n) 有沒有  
                noNum_flag = 0;   
                for(j=1; j<=i; j++){  
                      
                    if(t[i] == s[j]){  
                        t[i]++; // 是 S 中的數字，t[i]+1 繼續找 S  
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

