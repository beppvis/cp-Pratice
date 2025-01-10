#include <cstdio>
#include <iostream>
#include <vector>


using namespace std;

int main(){
  freopen("paint.in","r" ,stdin );
  freopen("paint.out","w" ,stdout);
  
  int a(0),b(0);
  cin >> a >> b;
  int c(0),d(0);
  cin >> c >> d;

  vector<bool> fences(100) ;  
  for (int i =a ; i <b; i++){fences[i]=true;}
  for (int i =c ; i <d; i++){fences[i]=true;}

  int ans = 0;
  for (int i = 0 ; i< fences.size();i++){ans+= fences[i];}
  
  cout << ans << endl;
}
