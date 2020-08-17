#include<iostream>
using namespace std;

inline int square(int n){
	return n*n;
}

int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"The sqaure of "<<n<<" is: "<<square(n)<<endl;
		
	return 0; 
}


