#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() {
    char a[1000],b[1000];
    cin>>a;
    cin>>b;
    int n,i=0,j,l1,l2,ak=0;
    l1=strlen(a);
    l2=strlen(b);
    while(i<l1)
        {
        while(j<l2)
            {
            if(a[i]==a[j])
                {
                ak++;
                i++;
                j=0;
                }
            j++;
            }
       
        }
    if(ak==l1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

