#include<iostream>
using namespace std;

void input(int *,int,int);

int main(){
	
	int row,col;
	cout<<"Enter the number of rows: ";
	cin>>row;
	cout<<"Enter the number of columns: ";
	cin>>col;
	int mat[row][col];
	input(&mat[0][0],row,col);
	
	return 0;
}

void input(int *p, int row, int col){
	int i,j;
	cout<<"Enter the matrix element:"<<endl;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){	
			cin>>*(p+(i*col)+j);
		}
	}
	
}


