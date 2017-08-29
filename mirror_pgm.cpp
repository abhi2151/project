#include<bits/stdc++.h>
using namespace std;


int main(){
  freopen("ip.pgm", "r", stdin);
  freopen("op.pgm", "w", stdout);
  cout<<"P2\n";
  string s; getline(cin,s); getline(cin,s);
  int r,c,b ;cin>>r>>c>>b; cout<<r<<" "<<c<<endl<<b<<endl; int vec[c];
  for(int i=0;i<r;++i){
    for(int j=0;j<c;++j) cin>> vec[j];
    for(int j=c-1;j>=0;--j) cout<<vec[j]<<" ";
    cout<<endl;
  }
  return 0;
}
