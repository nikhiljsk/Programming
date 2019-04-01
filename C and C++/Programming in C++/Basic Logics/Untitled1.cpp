#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int find(int c[],int i,int n){
	int k=0;
	for(k=0;k<n;k++)
	{
		if (c[k] == i)
		return k;
	}
}

int main(){
    int t;
    cin>>t;
    int m,n,i,j;
    while(t>0){
        cin>>m;
        cin>>n;
        int c[n];
        for(i=0;i<n;i++)
        {cin>>c[i];}
        sort(c,c+n);
        i=0;
        j=n-1;
        while(i<j)
        {
            int value = c[i] + c[j];
            if(value==m){
                cout<<find(c,c[i],n)<<ends<<find(c,c[j],n)<<endl;
                break;
            }
            else if(value < m)
                i+=1;
            else
                j-=1;
        }
        t-=1;
    }
}
