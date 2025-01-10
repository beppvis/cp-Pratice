#include <iostream>

using namespace std;



int main(){

  int N(0); 

  cin >> N;
 
  int out = 0;
  for (int i = 0 ; i < N;i ++ ){
    int s = 0;    

    for (int j = 0 ; j < 3;j ++ ){
      int x = 0;
      cin >> x;
      s += x;
    }

    if (s>=2){
      out += 1;      
    }
   
  }

  cout << out <<endl;  
}
