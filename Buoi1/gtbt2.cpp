#include <iostream>
using namespace std;

int main(){
	long long a, b, c;
	cin >> a >> b >> c;
	
	long long kq = a*(b+c) + b*(a+c);
	
	cout << kq;
}
