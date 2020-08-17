#include<iostream>
using namespace std;

void input(int *p, int row, int col){
	int i,j;
	cout<<"Enter the Matrix elements:"<<endl;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cin>>*(p+(i*col)+j);
		}
	}
}

void display(int *p, int row, int col){
	int i,j;
	cout<<"The Entered Matrix is:"<<endl;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cout<<" "<<*(p+(i*col)+j);
		}
		cout<<endl;
	}
}

int main(){
	int row,col;
	cout<<"Enter the number of rows: ";
	cin>>row;
	cout<<"enter the number of columns: ";
	cin>>col;
	int mat[row][col];
	
	input(&mat[0][0],row,col);
	display(&mat[0][0],row,col);
	
	return 0;
}
