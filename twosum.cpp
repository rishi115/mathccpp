#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,6,3,4,5};
    int num=0;
    int target=10;
    for(int i=0;i<=5;i++){
        
        int rem=target-num;
        if(rem==arr[i]){
            cout<<num<<" "<<rem;
        }
        
        int num=arr[i];
    }
}

