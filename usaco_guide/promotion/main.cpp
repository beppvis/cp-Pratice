#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> out;
  int beforeBronze(0),afterBronze(0);
  int beforeSilver(0),afterSilver(0);
  int beforeGold(0),afterGold(0);
  int beforePlatinum(0),afterPlatinum(0);

  cin >> beforeBronze >> afterBronze;
  cin >> beforeSilver >> afterSilver;
  cin >> beforeGold >> afterGold;
  cin >> beforePlatinum >> afterPlatinum;

  out.push_back(afterPlatinum-beforePlatinum);
  out.push_back( afterPlatinum-beforePlatinum);

}
