#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	bool flag[10];
	int a[9];
	for(int i=100;i<=333;i++)
	{
		a[0]=i/100;
		a[1]=i/10%10;
		a[2]=i%10;
		a[3]=2*i/100;
		a[4]=2*i/10%10;
		a[5]=2*i%10;
		a[6]=3*i/100;
		a[7]=3*i/10%10;
		a[8]=3*i%10;
		memset(flag,0,sizeof(flag));
		for(int j=0;j<=8;j++)
		{
			if(!flag[a[j]])flag[a[j]]=1;
			else break;
			if(j==8)cout<<i<<" "<<2*i<<" "<<3*i<<endl;
		}
	}
}
