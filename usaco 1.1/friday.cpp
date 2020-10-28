/*
ID: tafimh1
TASK: friday
LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    
    int n,x=0,p=0,k,flag=1;
    fin>>n;
    
    int a[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    int ans[7]={};
    
    for(int i=1900; i<1900+n; i++){
		
		bool leapYear ;
		if(i%400==0) leapYear=true;
		else if(i%4==0 && i%100!=0) leapYear=true;
		else leapYear=false;
		
		for(int j=0; j<12; j++){
		   
		   if(j==0 && flag) // will be executed only once for 1st january 1900
		      k = (13+x)%7,flag=0;
		   else {
		      if(j>1 && leapYear){ // if(leapyear) february = 29days
				  k = 29%7;
				  leapYear=false;
			  }
		      else k = (a[j==0 ? 0:j-1])%7;  // previous month modulas 7
		  }
		   p=(p+k)%7,ans[p]++;
	   }
    }
    
    fout<<ans[6]<<" ";
    for(int i=0; i<6; i++){
		if(i==5) fout<<ans[i]<<endl;
		else fout<<ans[i]<<" ";
	}
    return 0;
}
