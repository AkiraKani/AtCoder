#include<iostream>
#include<cmath>
using namespace std;
  
double get_distance(int *a, int *b, int length){
  double res = 0;
  for (int i = 0; i < length; i++) {
    res += pow(a[i] - b[i], 2.0);
  }
  res = sqrt(res);
  return res;
}
  
int main(){
  int N, D;
  int i, j;
  cin >> N >> D;
  
  int arr[N][D];
  
  for(i = 0; i < N; i++){
  	for(j = 0; j < D; j++){
      cin >> arr[i][j];
    }
  }
  
  int count = 0;
  double temp;
  for(i = 0; i < N; i++){
  	for(j = i + 1; j < N; j++){
      temp = get_distance(arr[i], arr[j], D);
      cout << i << "," << j << ": " << temp << endl;
      if (temp - floor(temp) == 0) {
        count++;
      }
    }
  }
  
  cout << count << endl;
  
  return 0;
}