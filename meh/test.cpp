#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> get_digits(int num,vector<int> digits){
  if (num/10){
    digits.push_back(num % 10);
    return get_digits(num/10,digits );
  }
  digits.push_back(num);
  return digits;
}
int main(){
  int L(0),R(0);
  cin >> L >> R;
  int count(0);
  for (int j = L ; j <= R; j++)
  {
    bool snake = true;
    vector<int> digits;
    digits = get_digits(j, digits);
    int start = digits.at(digits.size()-1);
    for (int i = 0; i < digits.size() -1  ;i ++)
    {
      if (digits.at(i) > start){
        snake = false;
        break;
      }
    }

    if (snake) count ++;
    
  }
  cout << count << endl;
}
