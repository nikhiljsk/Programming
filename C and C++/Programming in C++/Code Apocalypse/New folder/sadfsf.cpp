#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n1,j;
    cin>>n1;
    for(j=0;j<n1;j++)
    {
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        {
        cin>>a[i];
        }
    int sum=0;
    for(i=0;i<n-1;i++)
        {
        sum=sum+(a[i]-a[i+1]);
        }
    if(sum==0)
        cout<<a[0]<<endl;
    if(sum<0)
        {
        int z;
        z=-sum;
        cout<<z+1<<endl;
        }
    if(sum>a[0])
        cout<<"0"<<endl;
    }
    return 0;
}

