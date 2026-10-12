#include <iostream>
using namespace std;

int main(){
	long long a, b;
	cin >> a >> b;
	long long phannguyen = a/b;
	long long phandu = a%b;
	
	cout << phannguyen << " " << phandu;
}
