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

int main(){
	int h, w;
	cin >> h >> w;

	int a[h][w];
	int b[h][w];
	rep(i, h) {
		rep(j, w) {
			char c;
			cin >> c;
			if (c == '#') {
				a[i][j] = 1;
			} else {
				a[i][j] = 0;
			}
			b[i][j] = 0;
		}
	}

	rep(i, h+w-1) {
		for (int j = ((w - i > 0) ? 0 : i - w + 1); j < min(i+1, h); j++) {
			if (j == 0 && i == 0) {
				if (a[0][0] == 1) {
					b[0][0] = 1;
					continue;
				}
				continue;
			}
			// 横
			if (i - j == 0) {
				if (a[j - 1][i-j] == 1 && a[j][i-j] == 1) {
					b[j][i-j] = b[j-1][i-j];
					continue;
				}
				if (a[j][i-j] == 1) {
					b[j][i-j] = b[j-1][i-j] + 1;
					continue;
				}
				b[j][i-j] = b[j-1][i-j];
				continue;
			}
			// 縦
			if (j == 0) {
				if (a[j][i-j-1] == 1 && a[j][i-j] == 1) {
					b[j][i-j] = b[j][i-j-1];
					continue;
				}
				if (a[j][i-j] == 1) {
					b[j][i-j] = b[j][i-j-1] + 1;
					continue;
				}
				b[j][i-j] = b[j][i-j-1];
				continue;
			}
			int x = b[j-1][i-j];
			int y = b[j][i-j-1];
			if (a[j-1][i-j] != 1 && a[j][i-j] == 1) {
				x++;
			}
			if (a[j][i-j-1] != 1 && a[j][i-j] == 1) {
				y++;
			}
			b[j][i-j] = min(x, y);
			contin:;
		}
	}

	cout << b[h-1][w-1];

	return 0;
}
