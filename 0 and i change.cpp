#include<iostream>
using namespace std;

int main(){
	int arr[5]={0,1,0,3,12};
	int c=5;
	int low=0;
	int high=0;
while(c--){

	if(arr[low]!=0){
		swap(arr[low],arr[high]);
		low++;
		high++;
	}
	else{
		high++;
	}
}

for(int i=0;i<5;i++){
	cout<<arr[i];
}
return 0;
}
