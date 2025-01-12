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
  int max = 0;
  for (int i = 0 ; i < N ; i++)
  {
    for (int j = i ; j < N ;j++)
    {
      cout << nums[j] << " ";
    }
      cout << endl;
  }
  
}
