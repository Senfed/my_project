#include <iostream>
#include <cmath>

using namespace std;

void per(int n,int m){
	if (n < 0 and m < 0){
		cout << "Error!";
		return;
	} 
	cout << n*m << ", ";
	cout << 2*(n+m) << ", ";
	cout << sqrt(n*n+m*m) << endl;

}

int main(){
	int a,b;
	cout << "a\n";
	cin >> a;
	cout << endl << "b\n";
	cin >> b;

 	cout << "area, per, diag\n";
	per(a, b);

	return 0;
}
