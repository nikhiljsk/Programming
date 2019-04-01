#include<iostream>
using namespace std;
int main()
{
	int n,m1,n1,i,j;
	cout<<"Enter the size of the matrix"<<endl;
	cin>>m1>>n1;
	int a[m1][n1];
	cout<<"Enter the elements in the matrix"<<endl;
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			cin>>a[i][j];
		}
	}
	int rs=0, cs=0;     // RowStart and Column Start
    int re=n1-1, ce=m-1;  // RowEnd & columnEnd
    
    while(rs<=re && cs<=ce)
    {
        int i=rs, j=cs;
        
        for(j=cs; j<=ce; j++)
            cout<<" "<<a[i][j];
            
        for(i=rs+1, j--; i<=re; i++)
            cout<<" "<<a[i][j];
            
        for(j=ce-1, i--; j>=cs; j--)
            cout<<" "<<a[i][j];
            
        for(i=re-1, j++; i>=rs+1; i--)
            cout<<" "<<a[i][j];
             
        rs++; cs++; re--; ce--;
    }
} 
