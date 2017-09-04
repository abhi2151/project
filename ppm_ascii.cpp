#include<bits/stdc++.h>
using namespace std;
int main()
{
  freopen("op.pgm", "w", stdout);
  //image type P2 and file name.
  cout<<"P3"<<endl;
  //r=number of rows, c=number of columns, b=maximum intensity value in image, vec[c]=array of elements of same row.
  int r=10,c=10,b=255 ;
  cout<<r<<" "<<c<<endl<<b<<endl; int vec_r[r][c], vec_g[r][c], vec_b[r][c];
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++) 
	{
		if(i==j) 
		{
			vec_r[i][j]=255;
			vec_b[i][j]=0;
			vec_g[i][j]=0;
		} 
		else
		{
			vec_r[i][j]=0;
			if(i>j)
			{
				vec_b[i][j]=255;
				vec_g[i][j]=0;
			}
			else
			{
				vec_g[i][j]=255;
				vec_b[i][j]=0;
			}
		} 
	}
  }
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++) 
	{
		printf("%3d %3d %3d ", vec_r[i][j], vec_g[i][j], vec_b[i][j]);
	}
	cout<<endl;
  }  
  return 0;
}

