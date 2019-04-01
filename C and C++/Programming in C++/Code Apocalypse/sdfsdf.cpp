#include <iostream>
using namespace std;

int main()
{
    int k;
    int i,j,b,z,y,n1;
    cin>>n1;
    int a[n1][10];
    for(y=0;y<n1;y++)
    {
    int n;
    cin>>n;
    
    b=n/10;
    for(i=0;i<=9;i++)
    {
        a[y][i]=b;
    }
    if(n%10!=0)
    {
    z=n%10;
    a[y][b]=z+2+a[y][b];
	}
    for(i=1;i<10;i++)
    {
        if(b>i)
        a[y][i]=a[y][i]+10;
    }
    
    for(i=3;i<=z;i++)
    {
    	a[y][i]=a[y][i]+1;
    }
    }
    for(y=0;y<n1;y++)
    {
    for(i=0;i<10;i++)
    cout<<a[y][i]<<" ";
    cout<<endl;
    }

    return 0;
    
}

