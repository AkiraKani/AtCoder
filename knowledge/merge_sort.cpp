#include <cstdio>
#include <string>

using namespace std;

void merge(string& s, int left, int mid, int right){
  int i, j, k;

  int ln = mid - left;
  int rn = right - mid + 1;

  string l(ln, 'a');
  string r(rn, 'a');
  for(i = 0; i < ln; i++) l[i] = s[i + left];
  for(i = 0; i < rn; i++) r[i] = s[i + mid];

  i = 0;
  k = left;

  for(j = 0; j < rn; j++){
    while(i != ln){

      printf("? %c %c\n", l[i], r[j]);
      fflush(stdout);
      char ans;
      scanf(" %c", &ans);

      if (ans == '>') {
        s[k] = r[j];
        k++;
        break;
      } else {
        s[k] = l[i];
        k++;
        i++;
      }
    }
  }

  while(i != ln) {
    s[k] = l[i];
    k++;
    i++;
  }
}

void merge_sort(string& s, int left, int right){
  if(left < right) {
    int midl = (left + right - 1) / 2;
    int midr = (left + right + 1) / 2;

    merge_sort(s, left, midl);
    merge_sort(s, midr, right);

    merge(s, left, midr, right);
  }
}

int main(void){
  // N:ボールの数
  // Q:クエリの回数
  int N,Q,i,j;

  scanf("%d%d", &N, &Q);

  string s;
  for(i=0;i<N;i++) s += (char)('A' + i);

  merge_sort(s, 0, N - 1);

  printf("! %s\n", s.c_str());
  fflush(stdout);

  return 0;
}

