#include <iostream>
#include <conio.h>
using namespace std;

int j, n, pivot;
int *arr;

void show()
{
    cout<< "\n Array :     ";
    for (int  i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl; 
}
void exch(int a[],int i,int j){
    int s=a[i];
    a[i]=a[j];
    a[j]=s;
}

        
int partition(int a[],int l,int h){
    int i=l;
    int j=h;
    pivot=l;
    cout<<"\npivot element is: " << a[pivot] <<endl;
   while(i<j){
     while( a[i]<=a[pivot]) i++;          
     while(a[j]>a[pivot])j--;
     if(i<j) exch(a, i, j);
     
   }
    exch(a, j, pivot);
    show();
    return j;
}

void quick(int a[],int l,int h){
    if (h<=l) return ;
    j=partition(a,l,h);
    quick(a,l,j-1);
    quick(a,j+1,h);
    }

int main(){
    cout<<"Enter the size of array :  ";
    cin>>n;
    arr = new int[n];
    cout<<"\n *** Enter Array Elements *** \n";
    for (int i=0; i<n; i++) cin>> arr[i];
    cout<<"Initial Array is" <<endl;
     show();
     quick(arr,0,n-1);

     cout<<"\n      *** Sorted Array *** \n";
     show();
     getch();
     return 0;
 }
