#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <boost/multiprecision/cpp_int.hpp>

#include <iostream>
#include <vector>

using namespace std;
namespace mp = boost::multiprecision;
typedef long long ll;

const ll M = 1000000007;

vector<ll> fac(1000000); //n!(mod M)
vector<ll> ifac(1000000); //k!^{M-2} (mod M)
//a,bの範囲的にこれだけ配列を用意していけば十分

ll mpow(ll x, ll n){ //x^n(mod M) ←普通にpow(x,n)では溢れてしまうため，随時mod計算
	ll ans = 1;
	while(n != 0){
		if(n&1) ans = ans*x % M;
		x = x*x % M;
		n = n >> 1;
	}
	return ans;
}

ll comb(ll a, ll b){ //aCbをmod計算
	if(a == 0 && b == 0)return 1;
	if(a < b || a < 0)return 0;
	ll tmp = ifac[a-b]* ifac[b] % M;
	return tmp * fac[a] % M;
}

int main()
{
	ll n,k;

	ll x=1;
	ll y=1;
	cin >> x >> y;

	ll q = (x + y) / 3;
	ll r = (x + y) % 3;

	if (r == 0 && q <= x && x <= 2*q && q <= y && y <= 2*q && x <= 1000000 && y <= 1000000) {
		k = x - q;
		n = q;

		//大した量ではないので，先にfax[i]とifax[i]を全て計算しておく
		fac[0] = 1;
		ifac[0] = 1;
		for(ll i = 0; i<1000000; i++){
			fac[i+1] = fac[i]*(i+1) % M; // n!(mod M)
			ifac[i+1] = ifac[i]*mpow(i+1, M-2) % M; // k!^{M-2} (mod M) ←累乗にmpowを採用
		}

		ll ans=0;
		ans = comb(n, k)%M;
		cout << ans;
		return 0;
	}

	cout << 0;

	return 0;
}