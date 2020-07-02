#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int N, i;
	cin >> N;

	int a[N];
	int sum_even = 0;
	int sum_odd = 0;
	for (i = 0; i < N; i++) {
		cin >> a[i];
		if (i % 2 == 0) {
			sum_even += a[i];
		} else {
			sum_odd += a[i];
		}
	}

	int temp = sum_even - sum_odd;

	cout << temp;
	for (i = 0; i < N - 1; i++) {
		temp = 2 * a[i] - temp;
		cout << " " << temp;
	}
	cout << endl;

	return 0;
}