#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int gcd(int a, int b){
  if(b == 0) return a;
  return gcd(b, a % b);
}

int main(){
  return 0;
}
