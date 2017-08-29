#include<bits/stdc++.h>
using namespace std;
int main()
{
  //copy of file to process
  freopen("ip.pgm", "r", stdin);  freopen("op.pgm", "w", stdout);
  //image type P2 and file name.
  string s; getline(cin,s); cout<<s<<endl; getline(cin,s); cout<<s<<endl;
  //r=number of rows, c=number of columns, b=maximum intensity value in image, vec[c]=array of elements of same row.
  int r,c,b ;cin>>r>>c>>b; cout<<r<<" "<<c<<endl<<b<<endl; int vec[c];
  for(int i=0;i<r;++i)
  {
    //pixel intensity as input in the vector.
    for(int j=0;j<c;++j) cin>> vec[j];
    //mirroring of intensity of image.
    for(int j=c-1;j>=0;--j) cout<<vec[j]<<" ";    cout<<endl;
  }
  return 0;
}
