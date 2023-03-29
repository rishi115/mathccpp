#include<iostream>
using namespace std;

int main(){
	int a[5]={7,6,4,3,1};
	int maxprofit =0;
	int minsofar =a[0];
	
	for(int i=0;i<=5;i++){
		minsofar=min(minsofar,a[i]);
		int profit=a[i]-minsofar;
		maxprofit=max(maxprofit,profit);
		
	}
	cout<<maxprofit;
	return 0;
}
