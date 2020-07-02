#include <algorithm>
#include <bitset>
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/range/irange.hpp>
#include <cmath>
#include <map>
#include <numeric>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
namespace mp = boost::multiprecision;
typedef long long ll;
const ll M = 1000000007;

bool check(ll n, ll m, ll v, ll p, ll idx, vector<ll> a, vector<ll> b, map<ll, bool> &hash) {
	if (hash.count(b[idx]) != 0) {
		return hash[b[idx]];
	}
	v--;
	a[idx] += m;
		for (int i = 0; i < n; ++i)
	{
		cout << a[i];
	}
	cout << endl;
	for (int i = 0; i < idx && v > 0; ++i) {
		a[i] += m;
		v--;
	}
	if (v != 0) {
		for (int i = n-1; v > 0; --i) {
			if (a[i] != a[idx]) {
				a[i] += m;
				v--;
			}
		}
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n; ++i)
	{
		cout << a[i];
	}
	cout << endl;
	ll tar;
	tar = a[n-p] - m;
		cout << "tar" << idx << endl;
	cout << "tar" << tar << endl;
		cout << "tar" << b[idx] << endl;
	if (tar <= b[idx]) {
		hash[b[idx]] = true;
		return true;
	}
	hash[b[idx]] = false;
	return false;
}

int main(){
	ll n, m, v, p;
	cin >> n >> m >> v >> p;
	vector<ll> a(n);
	vector<ll> b(n);
	map<ll, bool> hash;
	for (int i = 0; i < n; ++i)
	{
		ll x;
		cin >> x;
		a[i] = x;
		b[i] = x;
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
    ll left = 0, right = n-1, mid;

    while (left < right) {

        mid = (left + right)/2;
        if (check(n, m, v, p, mid, a, b, hash)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    cout << check(n, m, v, p, mid-1, a, b, hash);
    if (check(n, m, v, p, mid, a, b, hash)) {
    	for (int i = 0; i < n; ++i) {
    		if (b[i] == b[mid]) {
    			cout << n - i;
    			return 0;
    		}
    	}
    }
    for (int i = 0; i < n; ++i) {
    	if (b[i] == b[mid]) {
    		cout << n - i - 1;
			return 0;
		}
	}
	return 0;
}



