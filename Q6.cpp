#include <iostream>
using namespace std;

int fact(int);
double combination(int, int);
int main() {
    int n,k;
    bool flag;
    do{
    	cout<<"Enter the value of n: ";
    	cin>>n;
    	cout<<"Enter the value of k: ";
    	cin>>k;
    	if(n>0 && k>0 && n>k){
    	cout<<"The Combination of is: "<<combination(n,k);
    	flag=false;
		}
		else {
		cout<<"Wrong Input!"<<endl<<endl;
		flag=true;
		}
	} while(flag);
	
    
    return 0;
}

int fact(int m) {
    if (m>=1) {
        return m * fact(m-1);
    } else {
        return 1;
    }
}

double combination(int n, int k){
	double comb = fact(n)/(fact(k)*fact(n-k));
	return comb;
}
