#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;


void split(const string &s,char delim ,vector<string> &elims){
  stringstream ss(s);
  string item;
  while(getline(ss,item,delim)){
    elims.push_back(item);
  }
  
}

int main(){
  int N(0),K(0);

  cin >> N >> K;

  string in("",N);
  // cout << "\n";
  cin.ignore();
  getline(cin,in);

  vector<string> words;  

  split(in,' ',words);

  int count(0);
  vector<string> out;
  int begin_in(0);


  for (int i = 0 ; i != words.size(); i ++){
    
  }
  

  for (int i = 0 ; i != out.size(); i ++){
    cout << out[i] << endl;
  }


}
