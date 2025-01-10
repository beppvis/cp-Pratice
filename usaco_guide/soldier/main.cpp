#include <cmath>
#include <iostream>

using namespace std;


int main(){
  long long k(0),n(0);
  double w(0);
  cin >> k >> n >> w;

  

  int sum = (w/2)*(k+k*w);

  if (n >= sum){
    cout << 0 << endl;
  }
  else{
    int borrow = abs(n - sum);
    cout << borrow << endl;
  }


}


