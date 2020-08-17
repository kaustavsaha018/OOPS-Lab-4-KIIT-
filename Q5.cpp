#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int n;
	cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factorial of "<< n<<" is "<<factorial(n);
    return 0;
}

int factorial(int n) {
    int i,fact=1;
	while(n>0){
		fact=fact*n;
		n--;
	}
}
