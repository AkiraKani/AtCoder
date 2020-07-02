#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int combi(int n, int r) {
	int c[n][n];
	int i, j;
	for(i = 0; i < n; i++) {
		c[i][i] = 1;
		c[i][0] = 1;
	}

	// nCr = n-1Cr-1 + n-1Cr
	for (i = 2; i < n; i++) {
		for (j = 1; j < i; j++) {
			c[i][j] = c[i-1][j-1] + c[i-1][j];
			cout << i << "C" << j << ": " << c[i][j] << endl;
		}
	}
	return c[n-1][r-1];
}

int main(){
	int a, b;
	cin >> a >> b;
	cout << (int)combi(a, b) << endl;
	return 0;
}