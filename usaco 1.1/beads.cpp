/*
ID: tafimh1
TASK: beads
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */

#include <bits/stdc++.h>

using namespace std;

int main() {

    ofstream fout ("beads.out");
    ifstream fin ("beads.in");

    int n;
    string s;
    fin>>n>>s;
    s+=s; n*=2;
    
    int ans=0;
    vector<int> pos;
    
    for(int i=0,x=1,y=1; i<n; i++){
		if(s[i]=='b' && x){
			pos.push_back(i),x=0,y=1;
		}
		if(s[i]=='r' && y){
			pos.push_back(i),y=0,x=1;
		}
	}
	for(int i=0; i<(int)pos.size(); i++){
		
		int l=0,x=pos[i],y=pos[i]-1;
		char c = s[x];
		
		while(x<n){
			if(s[x]==c || s[x]=='w'){
			  l++,x++;
		    }
			else break;
		}
		
		while(y>=0){
			if(s[y]==c || s[y]=='w'){
			  l++,y--;
		    }
		    else break;
		}
		
		int p=0,q=0;
		
		while(x<n){
			if(s[x]!=c)
			  p++,x++;
			else break;
		}
		
		while(y>=0){
			if(s[y]!=c)
			  q++,y--;
		    else break;
		}
		
		l+=max(p,q);
		ans=max(ans,l);
	}
	
	if((int)pos.size()<=2) ans=n/2;
			
	fout<<min(ans,n/2)<<endl;
    exit(0);
}
