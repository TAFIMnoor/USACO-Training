/*
ID: tafimh1
TASK: namenum
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */

#include <bits/stdc++.h>

using namespace std;

int main() {

    ofstream fout ("namenum.out");
    ifstream fin ("namenum.in");
    ifstream fin2 ("dict.txt");
    
    string s,t;
    fin>>t;
    vector<string> v,ans;
    
    while(fin2>>s){
		if(s.size()==t.size()){
			v.push_back(s);
		}
	}
	
	int a[]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,0,7,7,8,8,8,9,9,9,0};
	
	for(int i=0; i<(int)v.size(); i++){
		bool flag=true;
		for(int j=0; j<(int)t.size(); j++){
			if(a[v[i][j]-'A']!=(t[j]-'0')){
				flag=false;
				break;
			}
		}
		if(flag)
		   ans.push_back(v[i]);
	 }
	 
	 if(ans.empty()){
		 fout<<"NONE"<<endl;
	 } else {
		 for(auto it:ans)
		     fout<<it<<endl;
		 }
    
	exit(0);
			
}
