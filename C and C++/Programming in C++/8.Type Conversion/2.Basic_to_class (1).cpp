//basic to class
#include<iostream>
#include<conio.h>
using namespace std;
class abc{
	float x;
	public:
		abc(int a)//float is explicitly converted into int to display the value
		{
			x=a;
		}
		void show()
		{
			cout<<x;
		}
};
int main()
{
	float a1=30.77;//basic datatype
	abc q=a1;//destination is q and source is s //type conversion
	q.show();
	
}
