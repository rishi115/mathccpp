#include<iostream>
using namespace std;

int main(){
   	int arr[8];
   	for(int i=0;i<=8;i++){
   		cin>>arr[i];
	   }
	
	int lo=0;
	int hi=8;
	int mid=0;
	while(mid!=hi){
		switch(arr[mid]){
		
			case 0:
				swap(arr[lo++],arr[mid++]);
				break;
			case 1:
				mid++;
				break;
	}
			
	}
	for(int i=0;i<=8;i++){
		cout<<arr[i];
	}
	return 0;
	
}
