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

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define decn int n = 0; cin >> n
#define sort(v) sort(v.begin(), v.end())
#define in(type, n) type n = 0; cin >> n

using namespace std;
namespace mp = boost::multiprecision;
typedef long long ll;
const ll M = 1000000007;

// mod. m での a の逆元 a^{-1} を計算する
long long modinv(long long a, long long m) {
    long long b = m, u = 1, v = 0;
    while (b) {
        long long t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}

ll mpow(ll x, ll n){ 
	ll ans = 1;
	while(n != 0){
		if(n&1) ans = ans*x % M;
		x = x*x % M;
		n = n >> 1;
	}
	return ans;
}

ll comb(ll a, ll b){ 
	vector<ll> fac(1000000);
	vector<ll> ifac(1000000);
	fac[0] = 1;
	ifac[0] = 1;
	for(ll i = 0; i<1000000; i++){
		fac[i+1] = fac[i] * (i+1) % M; // n!(mod M)
		ifac[i+1] = ifac[i] * mpow(i+1, M-2) % M; // k!^{M-2} (mod M) ←累乗にmpowを採用
	}
	if(a == 0 && b == 0)return 1;
	if(a < b || a < 0)return 0;
	ll tmp = ifac[a-b] * ifac[b] % M;
	return tmp * fac[a] % M;
}


ll comb2(ll a, ll b){ 
	if(a == 0 && b == 0)return 1;
	if(a < b || a < 0)return 0;
	ll tmp = 1;
	rep(i, b) {
		tmp = tmp * (a - i) %M;
	}
	ll tmpfac = 1;
	rep(i, b) {
		tmpfac = tmpfac * (i + 1) % M;
	}
	ll inv = modinv(tmpfac, M);
	return tmp * inv % M;
}

vector<ll> convert(ll n) {
	vector<ll> v(30);
	ll tmp = n;
	rep(i, 30) {
		v[30-i-1] = (ll)(tmp / pow(2, 29 - i));
		tmp -= v[30-i-1] * pow(2, 29 - i);
	}
	return v;
}

ll mpow2(ll n) {
	vector<ll> v = convert(n);
	vector<ll> powv(30);

	powv[0] = 2;
	rep(i, 29) {
		powv[i + 1] = powv[i] * powv[i] % M;
	}
	ll ret = 1;
	rep(i, 30) {
		if(v[i] == 1) {
			ret = ret * powv[i] % M;
		}
	}
	return ret;
}

// a ÷ b mod. MOD を計算してみる
int main(){
	ll n, a, b;
	cin >> n >> a >> b;

	cout << ((((mpow2(n) - 1) % M) - comb2(n, a)) % M  - comb2(n, b)) % M;

	return 0;
}
