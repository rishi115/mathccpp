#include<iostream>
using namespace std;

int main(){
    string a="rishi";
    
    string b;
    
    for(int i=0;i<=4;i++){
        b=a.substr(i,2);
        
        cout << b << " ";
    }
return 0;
   
}