#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
namespace mp = boost::multiprecision;

int main(){
	int i, n;
	vector<pair<int, int>> tasks;

	for(i = 0; i < n; i++){
		int a, b;
		cin >> a >> b;
		tasks.emplace_back(b, a);
	}

	sort(tasks.begin(), tasks.end());
	int sum = 0;
	for(auto v : tasks){
		sum += v.second;

		if(v.first < sum){
			return 0;
		}
	}

	cin >> n;

	return 0;
}