/*
ID: tafimh1
TASK: dualpal
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */

#include <bits/stdc++.h>

using namespace std;

int main() {

    ofstream fout ("dualpal.out");
    ifstream fin ("dualpal.in");
    
    int n,s;
    fin>>n>>s;
    s+=1;
    while(n){
		bool flag=false;
		for(int i=2; i<=10; i++){
			int x=s;
			string a,b;
			while(x){
				a+=(x%i)+'0';
				x/=i;
			}
			b=a;
			reverse(b.begin(),b.end());
			if(a==b){
				if(flag){
					fout<<s<<endl,n--;
					break;
				}
				flag=true;
			}
		}
		s++;
	}	
			
	exit(0);
			
}
