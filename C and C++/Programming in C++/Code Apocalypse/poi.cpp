#include <iostream>
using namespace std;

int main()
{
    int k;
    int i,j,z,y,n1;
    int b[2][10];
    for(j=0;j<2;j++)
    {
    for(i=0;i<10;i++)
    {
    	b[j][i]=0;
    }
	}
    cin>>n1;
    char a[n1][10];
    for(y=0;y<n1;y++)
    {
    
    int n;
    cin>>n;
    for(i=0;i<n;i++)
    {
    	a[y][j]='i';
    }
    for(i=0,j=0;i<n;i++,j++)
    {
    	if(a[y][i]==j)
    	++b[y][j];
    }
    
    }
    for(y=0;y<n1;y++)
    {
    for(i=0;i<10;i++)
    cout<<b[y][i]<<" ";
    cout<<endl;
    }

    return 0;
    
}

