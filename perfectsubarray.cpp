#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin>>t;
	int tc=1;
	while(t--){
		int n;
		cin >>n;

		vector<int>a(n);
		unordered_map<int,int> m;
		m[0]=1;
		int minSum =0;
		int sum=0;
		int ans=0;
		for(int i=0;i<n;i++){
			cin >>a[i];
			sum+=a[i];
			minSum =min(minSum,sum);
			for(int j=0;(sum-j*j)>=minSum;j++){
				if(m.count(sum-j*j)==1)
				ans+=m[sum-j*j];
			}
			m[sum]+=1;
		}
		cout<<"Case #"<<tc<<": " <<ans<<"\n";
		tc+=1;
	}

}
