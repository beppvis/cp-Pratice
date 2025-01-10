#include <bits/stdc++.h>


using namespace std;





int reccursIon(vector<int> coins,int num,int sum)
{

  if (sum == 0 ) return 1;
  if (sum <= 0 || num == 0 ) return 0;
  
  return reccursIon(coins, num , sum - coins.at(num-1)) + reccursIon(coins,num-1 ,sum);
  
}


int main(){

  vector<int>coins = {1,2,3};

  int sum = 5;


  int x = reccursIon(coins, coins.size(), sum);

  cout << x<< endl;

  
  
}
