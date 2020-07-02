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

// 約数列挙
vector<ll> enum_divisor(ll a) {
	vector<ll> a_div(0);

	ll sqrta = (ll) sqrt(a);
	for (unsigned int i = 1; i < sqrta + 1; i++) {
		if (a % i == 0) {
			a_div.push_back(i);
			if (i != a/i) {
				a_div.push_back(a/i);
			}
		}
	} 

	return a_div;
}

// 最大公約数
ll gcd(ll a, ll b) {
	ll r, temp;
	if (a < b) { 
		temp = a; 
		a = b; 
		b = temp; 
	}
	while ((r = a%b) != 0) {
		a = b;
		b = r;
	}
	return b;
}

// x^n(mod M) ←普通にpow(x,n)では溢れてしまうため，随時mod計算
ll mpow(ll x, ll n){ 
	ll ans = 1;
	while(n != 0){
		if(n&1) ans = ans*x % M;o
		x = x*x % M;
		n = n >> 1;
	}
	return ans;
}

// aCbをmod計算、組み合わせ、コンビネーション
// 事前記述
// const ll M = 1000000007;
// vector<ll> fac(1000000);
// vector<ll> ifac(1000000);
// fac[0] = 1;
// ifac[0] = 1;
// for(ll i = 0; i<1000000; i++){
// 	fac[i+1] = fac[i] * (i+1) % M; // n!(mod M)
// 	ifac[i+1] = ifac[i] * mpow(i+1, M-2) % M; // k!^{M-2} (mod M) ←累乗にmpowを採用
// }

// ll comb(ll a, ll b){ 
// 	if(a == 0 && b == 0)return 1;
// 	if(a < b || a < 0)return 0;
// 	ll tmp = ifac[a-b] * ifac[b] % M;
// 	return tmp * fac[a] % M;
// }

// 各ライブラリの動作確認用
int main(){
	std::vector<int> v;
	for (int i = 0; i < 10; ++i)
	{
		v.push_back(i+1);
	}

	cout << accumulate(v.begin()+3, v.end(), 0);
	return 0;
}
