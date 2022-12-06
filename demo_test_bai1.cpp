#include <iostream>
using namespace std;
const int N = 100;

int n, Q;
int A[N];
void input(){
	cout << "Nhap n: ";
	cin >> n;
	for(int i = 0; i< n; i++){
		cin >> A[i];
	}
}
int ComputeQ(int A[],int n){
	for ( int i = 1; i < n; i++){
		if(A[i] > A[i-1] and A[i] > A[i+1]){
			Q++;
			i++;
		}
	}
	return Q;
}
int main(){
	input();
	cout << ComputeQ(A,n);
	return 0;
}