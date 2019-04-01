#include<iostream>
using namespace std;
int main(){
	int rows,cols,loop1,loop2;
	cout<<"Enter the rows and columns in the matrix"<<endl;
	cin>>rows>>cols;
	int **matrix = new int * [rows];
	for(loop1=0;loop1<rows;loop1++){
		matrix[loop1]=new int [cols];
	}
	cout<<"Enter the elements in the matrix"<<endl;
	for(loop1=0;loop1<rows;loop1++){
		
		for(loop2=0;loop2<cols;loop2++){
			cin>>matrix[loop1][loop2];
		}
	}
	cout<<endl<<"Entered elements are "<<endl;
	for(loop1=0;loop1<rows;loop1++){
		
		for(loop2=0;loop2<cols;loop2++){
			//cout<<"Debug"<<endl;
			cout<<matrix[loop1][loop2]<<ends;
		}
		cout<<endl;
	}
	return 0;
}
