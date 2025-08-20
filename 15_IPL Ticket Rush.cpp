// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/IPLTRSH

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    int n, m;
	    cin>>n>>m;
	    
	    int a = n-m;
	    
	    if(a>0){
	        cout<<a<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}

}
