#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,m,t,k=0,ele=0,max=0,min=0;
    cin>>t;
    int b[t];
    while(k<t){
        max=0;
        min=0;
        cin>>n;
        cin>>m;
        int a[n];
        ele=n-m;
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        for(j=0;j<ele;j++)
        min=min+a[j];
        for(j=n-1,i=0;i<ele;j--,i++)
        max=max+a[j];
        
        b[k]=max-min;
        k++;
    }
    for(i=0;i<t;i++)
    cout<<b[i]<<endl;

}
