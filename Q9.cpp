#include <iostream>
#include <math.h>
using namespace std;

void area(double);
void area(double,double);
void area(double,double,double);

int main(){
	double radius=5;
	double length=4,breadth=3;
	double side1=2,side2=2,side3=3;
	
	area(radius);
	area(length,breadth);
	area(side1,side2,side3);
	
	return 0;
}

void area(double r){
	cout<<"The area of the circle is: "<< 3.14*r*r<<endl;
}

void area(double l, double b){
	cout<<"The area of the rectangle is: "<< l*b<<endl;
}

void area(double s1, double s2, double s3){
	double S = (s1+s2+s3)/2;
	double ar = sqrt(S*(S-s1)*(S-s2)*(S-s3));
	cout<<"The area of the triangle is: " <<ar<<endl;
}
