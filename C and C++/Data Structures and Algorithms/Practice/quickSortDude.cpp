#include<iostream>
#include<conio.h>
using namespace std;
void Quicksort(int [],int , int );
int partition(int [],int , int );

int main(){
	int a[5]={1,3,2,5,4};
	Quicksort(a,0,4);
	cout<<"The elements after Quick Sort are \n";
	for (int i=0;i<5;i++){
		cout<<a[i]<<"\t";
	}
}

void Quicksort(int a[],int l,int u){
	int j;
	if(l<u){
		j=partition(a,l,u);
		Quicksort(a,l,j-1);
		Quicksort(a,j+1,u);
	}
}

int partition(int a[],int l,int u){
	int pivot,left,right,temp;
	pivot=a[l];
	left=l+1;
	right=u;
	
	while(left<right){
		while(a[left]<pivot && left<u){
			left++;
		}
		while(pivot<a[right] && right>l){
			right--;
		}
		
		if(left<right){
			temp=a[left];
			a[left]=a[right];
			a[right]=temp;	
		}
		
	}
	
	a[l]=a[right];
	a[right]=pivot;
	return(right);
}
