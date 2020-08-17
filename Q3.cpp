#include<iostream>
using namespace std;

void input(int *p,int col,int row){
	int i,j;
	cout<<"Enter the Matrix elements:"<<endl;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cin>>*(p+(i*col)+j);
		}
	}
}

void display(int *p,int col,int row){
	int i,j;
	cout<<"The Entered Matrix is:"<<endl;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cout<<" "<<*(p+(i*col)+j);
		}
		cout<<endl;
	}
}

void input(int *p,int cols,int rows=2);
void display(int *p,int cols,int rows=2);

int main(){	
	int col;	
	cout<<"Enter the number of columns: ";
	cin>>col;
    int mat[2][col];
		
	input(&mat[0][0],col);
	display(&mat[0][0],col);
	
	return 0;
}
