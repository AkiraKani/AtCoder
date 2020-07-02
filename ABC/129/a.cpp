#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
namespace mp = boost::multiprecision;


// 最小の2要素の和、ソート
int main(){
	vector<int> v(3);
	cin >> v[0] >> v[1] >> v[2];

	sort(v.begin(), v.end());

	cout << v[0] + v[1];

	return 0;
}