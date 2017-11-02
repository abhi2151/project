#include<bits/stdc++.h>
using namespace std;
//Objective: seclusion of loop of black bits. output is made in .txt file.  
main()
{
	freopen("Yingyang2.pgm", "r", stdin);  freopen("op.txt", "w", stdout);
	string s; getline(cin,s); cout<<s<<endl;  	
	int r, c, b, x, y, count=0; bool mat[r+2][c+2]; memset(mat,true,sizeof(mat));
	cin>>r>>c>>b; cout<<r<<" "<<c<<"\n"<<b<<"\n";
	for(int i=1; i<=r; i++)
		for(int j=1; j<=c; j++)
		{
			cin>>mat[i][j];
			if(count==0 && !mat[i][j]){
				x=i; y=j; count=1;
			}	
		}
	//how to give input in an array ni aata. 
	//following loop sahi h.		
	do
	{
		if(mat[i][j+1]==0 && mat[i-1][j+1]!=mat[i+1][j+1] && abs(z-0)!=4)
			{cout<<"0 "; j=j+1;}
		else if(mat[i-1][j+1]==0 && mat[i-1][j]!=mat[i][j+1]&& abs(z-0)!=4)
			{cout<<"1 "; i--; j++;}
		else if(mat[i-1][j]==0 && mat[i-1][j-1]!=mat[i-1][j+1]&& abs(z-0)!=4)
			{cout<<"2 "; }
		else if(mat[i-1][j-1]==0 && mat[i-1][j]!=mat[i][j-1]&& abs(z-0)!=4)
			{cout<<"3 ";}
		else if(mat[i][j-1]==0 && mat[i+1][j-1]!=mat[i-1][j-1] && abs(z-0)!=4)
			{cout<<"4 ";}
		else if(mat[i+1][j-1]==0 && mat[i][j-1]!=mat[i+1][j]&& abs(z-0)!=4)
			{cout<<"5 ";}
		else if(mat[i+1][j]==0 && mat[i+1][j-1]!=mat[i+1][j+1] && abs(z-0)!=4)
			{cout<<"6 ";}
		else if(mat[i+1][j+1]==0 && mat[i+1][j]!=mat[i][j+1] && abs(z-0)!=4)
			cout<<"7 ";
		else
		{
			cout<<"not cyclic"; break;
		}	
	}while(i!=x&&j!=y)

}
