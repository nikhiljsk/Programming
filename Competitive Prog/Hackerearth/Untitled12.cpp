#include <iostream>
using namespace std;

int main()
{
   int i,j=0,n,k,t;
    cin>>t;
    int min[t];
    int max[t];
    while(j<t){
        cin>>n;
        cin>>k;
        if(n==k)
        {
            min[j]=-1;
            min[j]=-1;
        }
        else if(k==1||k==2)
        {
            min[j]=k;
            max[j]=k;
        }
        else if(k=3)
        {   cout<<"print";
            min[j]=2;
            max[j]=4;
        }
        else if(k=n-1)
        {
            min[j]=1;
            max[j]=1;
        }
        else
        {
            min[j]=2;
            max[j]=n-k;
        }
        j++;
    }
    for(i=0;i<t;i++)
    {
        if(min[i]==-1)
        cout<<"impossible"<<endl;
        else
        cout<<min[i]<<" "<<max[i]<<endl;
    }
    
}

