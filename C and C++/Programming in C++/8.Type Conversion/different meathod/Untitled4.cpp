#include<iostream>
using namespace std;
class abc{
	int a[2][2];
	public:
		void get()
		{int i,j;
		for(i=0;i<2;i++)
			{
			for(j=0;j<2;j++)
				{
				cin>>a[i][j];
				}
		}
		}
		int operator--()
	{	
			int i,j;
			for(i=0;i<2;i++)
			{
			for(j=0;j<2;j++)
				{
				cout<<--a[i][j]<<endl;
				}
			}	
	}
		
};
int main()
{
	abc s;
	s.get();
	--s;
	return 0;
}
