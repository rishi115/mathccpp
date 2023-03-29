#include<iostream>
using namespace std;

int main(){
	int arr[7];
	for(int i=0;i<7;i++){
		cin>>arr[i];
	}
	int z=0;
	int o=0;
	for(int i=0;i<7;i++){
		
		switch(arr[i]){
		
			case 0:
				z++;
				break;
			case 1:
				o++;
				break;
			}
		
	}
	cout<<z<<endl;
	cout<<o;
	
	return 0;
}
