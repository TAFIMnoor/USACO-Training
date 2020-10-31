/*
ID: tafimh1
TASK: palsquare
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */

#include <bits/stdc++.h>

using namespace std;

int main() {

    ofstream fout ("palsquare.out");
    ifstream fin ("palsquare.in");
    
    int n;
    fin>>n;
    
    for(int i=1; i<=300; i++){
		
		long long b=i*i;
		string p,q;
		while(b){
			if(b%n<10)
			   p+=(b%n)+'0';
			else{
				char c = (b%n)-10+65;
				p+=c;
			}
			b/=n;
		}
		q=p;
		reverse(q.begin(),q.end());
		
	    if(p==q){
			p.clear();
			b=i;
			while(b){
			if(b%n<10)
			   p+=(b%n)+'0';
			else{
				char c = (b%n)-10+65;
				p+=c;
		    }
		    b/=n;
		}
			reverse(p.begin(),p.end());
			fout<<p<<" "<<q<<endl;
		}
		
	}
			
	exit(0);
			
}
