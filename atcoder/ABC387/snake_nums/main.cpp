#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

using ll = long long;


int count(ll r)
{

  vector<int> digit;
  while (r){
    digit.push_back(r%10);
    r /= 10;
  }
  reverse(digit.begin(),digit.end());
  int n = digit.size();  

  for (int i=1 ;i<=n; i++){
    
  }
  
  return 0;
}


int main()
{

  
}
