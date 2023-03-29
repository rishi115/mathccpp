#include<iostream>
#include<bits/stdc++.h>
using namespace std;
	int main() {
	    // code here
	    string str="risjirishi";

	    unordered_map<char,int>map;
	    string ans = "";
	    
	    for(int i = 0; i<str.length(); i++)
	    {   
	        if(map[str[i]] < 1)
	        {
	            ans = ans + str[i];
	        }
	        map[str[i]]++;
	    }
	    
	cout<<ans;
	    
	return 0;
	}