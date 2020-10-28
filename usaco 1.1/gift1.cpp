/*
ID: tafimh1
TASK: gift1
LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    
    int n,x,y;
    fin>>n;
    string s,s2[n];
    map<string,int> v;
    for(int i=0; i<n; i++){
		fin>>s2[i];
	}
	for(int i=0; i<n; i++){
		fin>>s>>x>>y;
	    if(y==0)
	       continue;
	    v[s]-=(x-x%y);
	    x/=y;
	    while(y--)
	       fin>>s,v[s]+=x;
	}
	for(int i=0; i<n; i++){
		fout<<s2[i]<<" "<<v[s2[i]]<<endl;
	}  

    return 0;
}
