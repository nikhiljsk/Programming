#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[]= {2,6,1,3,4};
	sort(a,a+5);
	for(int i=0;i<5;i++)
	cout<<a[i]<<endl;
	return 0;
}
