#include<bits/stdc++.h>
using namespace std;
//Objective: seclusion of loop of black bits. output is made in .txt file.  
main()
{
	freopen("ipzed.pgm", "r", stdin);  freopen("opxzc.txt", "w", stdout);
	string s; getline(cin,s); cout<<s<<endl;  	
	int r, c, b, x, y, count =0; bool mat[r+2][c+2] = {0};//memset 1 karna chahiye coz blach seclude kar rahe h.. //int arr[r*c]={0};
	cin>>r>>c>>b; cout<<r<<" "<<c<<"\n"<<b<<"\n";
	for(int i=1; i<=r; i++)
		for(int j=1; j<=c; j++)
		{
			cin>>mat[i][j];
			if(count==0&&mat[i][j]==0)
			{
				x = i; y = j; count =1;
			}	
		}
	//how to give input in an array ni aata. 
	//following loop sahi h.		
	do
	{
		if(mat[i][j+1]==0 && mat[i-1][j+1]!=mat[i+1][j+1])
			{cout<<"0 "; j=j+1;}
		else if(mat[i-1][j+1]==0 && mat[i-1][j]!=mat[i][j+1])
			{cout<<"1 "; i--; j++;}
		else if(mat[i-1][j]==0 && mat[i-1][j-1]!=mat[i-1][j+1])
			cout<<"2 ";
		else if(mat[i-1][j-1]==0 && mat[i-1][j]!=mat[i][j-1])
			cout<<"3 ";
		else if(mat[i][j-1]==0 && mat[i+1][j-1]!=mat[i-1][j-1])
			cout<<"4 ";
		else if(mat[i+1][j-1]==0 && mat[i][j-1]!=mat[i+1][j])
			cout<<"5 ";
		else if(mat[i+1][j]==0 && mat[i+1][j-1]!=mat[i+1][j+1])
			{
			}cout<<"6 ";
		else if(mat[i+1][j+1]==0 && mat[i+1][j]!=mat[i][j+1])
			cout<<"7 ";
		else
		{
			cout<<"not cyclic"; break;
		}	
	}while(i!=x&&j!=y)

}
