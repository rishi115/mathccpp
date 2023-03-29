#include<iostream>
#include <vector>
using namespace std;
    
int findduplictae(vector<int>&v1){
	int slow=v1[0];
	int fast=v1[0];
	do{
		slow=v1[slow];
		fast=v1[v1[fast]];
}while(slow!=fast);
fast=v1[0];
while(slow!=fast){
	slow=v1[slow];
	fast=v1[fast];
}
cout<<slow;
return slow;

}
    
int main(){
    vector<int>v1;
    int input;
    while (cin >> input) {
        v1.push_back(input);
        if(v1.size()==6){
            break;
        }
    }
    findduplictae(v1);
    
    return 0;
}    
