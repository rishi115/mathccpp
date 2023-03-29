#include<iostream>
using namespace std;

void pattern(int n){
	
	
		
		pattern(n-1);
	
	for(int i=1;i<=n;i++){
		cout<<i;
	}
	cout<<endl;

}
int main(){
	pattern(3);
}
