#include <iostream>
#include <math.h>
using namespace std;

void find_distance(int x1,int x2,int y1,int y2,int z1=0,int z2=0);

int main(){

	find_distance(1,2,2,4); 
	find_distance(1,2,3,2,4,6); 
	
	return 0;
}

void find_distance(int x1,int x2,int y1,int y2,int z1,int z2){
	int x=pow(x2-x1,2);
	int y=pow(y2-y1,2);
	int z=pow(z2-z1,2);
	float dist=sqrt(x+y+z);
	
	cout<<"Distance between the points is: "<<dist<<endl;
}
