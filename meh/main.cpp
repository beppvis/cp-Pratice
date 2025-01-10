#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;


vector<int> get_digits(int num,vector<int> digits){
  if (num/10){
    digits.push_back(num % 10);
    return get_digits(num/10,digits );
  }
  digits.push_back(num);
  reverse(digits.begin(),digits.end());
  return digits;
}

int count(int R){
  
  vector<int> digits; 
  digits = get_digits(R, digits);

  
  

  return 0;  
}


int main(){
  int L(0),R(0);
  cin >> L >> R;
  int count(0);
  cou
  
  cout << count << endl;
}
