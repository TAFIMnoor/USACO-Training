/*
ID: tafimh1
TASK: milk2
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */

#include <bits/stdc++.h>

using namespace std;

int main() {

    ofstream fout ("milk2.out");
    ifstream fin ("milk2.in");

    int n,m=0,l=INT_MAX;
    fin>>n;
    int a[1000005]={};
    
    for(int i=0; i<n; i++){
		int x,y;
		fin>>x>>y;
		m=max(m,y);
		l=min(l,x);
		fill(a+x,a+y,1);
	}
	int mt=0,idt=0;
	
	for(int i=l,x=0,y=0; i<=m; i++){
		if(a[i]) {
			x++;
			idt=max(idt,y);
			y=0;
		}
		else {
			y++;
			mt=max(mt,x);
			x=0;
		}
	}
	
	fout<<mt<<" "<<idt<<endl;
	
	exit(0);
			
}
