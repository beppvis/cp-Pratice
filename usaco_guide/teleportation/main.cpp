
#include <cstdio>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

  freopen("teleport.in","r" ,stdin);
  freopen("teleport.out","w",stdout);
  int a(0),b(0),x(0),y(0);
  cin >> a >> b >> x >> y;

  int dist = abs(a-b);

  if (dist > (abs(a-x) + abs(b-y))){dist = abs(a-x)+abs(b-y);}
  if (dist > (abs(a-y) + abs(b-x))){dist = abs(a-y)+abs(b-x);}
  
  

  cout << dist<<endl;
  
}

