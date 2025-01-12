#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

typedef vector<int> vi;

int main()
{
  int N(0);  

  cin >> N;

  vi nums;

  for (int i = 0 ; i <N ; i++)
  {
    int x = 0 ;
    cin >> x;
    nums.push_back(x);
  }
  int best = 0 , sum = 0;
  for (int i = 0 ; i < N ; i++)
  { 
    sum = max(nums[i],sum+nums[i]);
    best = max(best,sum);
  }

  cout << best << endl;
  
}
