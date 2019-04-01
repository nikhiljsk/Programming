#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,x,y,i,j;
    cin>>n;
    char a[n];
    cin>>x;
    cin>>y;  
    cin>>a;
    for(i=0;i<n;i++)
      {
        if(a[i]=='1')
            {
            x--;
            if(x>=0)
                {
                a[i]='y';
                } 
            else
                {
                y--;
            if(y>=0)
                    a[i]='y';
                else
                    a[i]='n';
                }
            }
       }
    for(i=0;i<n;i++)
        {
         if(a[i]=='2')
            {
             y--;
            if(y>=0)
                    a[i]='y';
                else
                    a[i]='n';
                }
            }
    for(i=0;i<n;i++)
        {
        if(a[i]=='y')
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        }
    return 0;
}

