#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main(){
	string str;
	cin >> str;

	char temp = str[0];
	for(int i = 1; i < 4; i++) {
		if(temp == str[i]){
			cout << "Bad" << endl;
			return 0;
		}
		temp = str[i];
	}

	cout << "Good" << endl;
	return 0;
}