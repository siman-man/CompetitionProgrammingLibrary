#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <limits.h>
#include <time.h>
#include <string>
#include <string.h>
#include <sstream>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <stack>
#include <queue>

using namespace std;

typedef long long ll;

unsigned long long xor128(){
  static unsigned long long rx=123456789, ry=362436069, rz=521288629, rw=88675123;
  unsigned long long rt = (rx ^ (rx<<11));
  rx=ry; ry=rz; rz=rw;
  return (rw=(rw^(rw>>19))^(rt^(rt>>8)));
}

bool next(long long diff, int t) {
  if (diff > 0) return true;
  /*
  return exp(b / 10000.0 / pow(0.999999, t)) > double(rnd()) / numeric_limits<uint32_t>::max();
  */
  double k = 10.0;
  return 100 * exp(diff/k*t) > xor128() % 100;
}

int eval_something(){
  return random() % 100;
}

int main(){

  int best_score = 0;
  int n = 100;

  for(int i = 0; i < n; i++){
    int score = eval_something();
  }

  return 0;
}
