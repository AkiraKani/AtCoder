#include<iostream>
#include<cmath>
using namespace std;
  
int main(){
  int L, R;
  cin >> L >> R;

  if(R - L > 2019){
    cout << 0;
    return 0;
  }

  int res = 2019;
  int temp = 0;
  for(int i = L; i < R; i++){
    for(int j = i + 1; j < R + 1; j++){
      temp = ((i % 2019) * (j % 2019)) % 2019;
      if (res > temp) {
        res = temp;
      }
    }
  }

  cout << res << endl;
  return 0;
}

