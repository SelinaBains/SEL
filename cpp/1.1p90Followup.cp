#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
int isUniqueString(char *b)//We are assuming only a-z alphabets right now, in small case
{
	int checker=0;// each int is 4 bytes i.e 4*8 = 32 bits and we need only 26 bits to act as falg for each of the 26 alphabets
	for(int i=0;i<strlen(b);i++)
	{
		int j = (*(b+i))-97;
		if ((checker&(1<<j))!=0)
		{
			return 0;
		}
		else
		{
			checker = (checker | (1<<j));
		}
	}
	return 1;
	
}
int main()
{
	char a[20];
	cout<<"Enter the String (only a-z, in small letters)"<<"\n";
	cin>>a;
	if(isUniqueString(a))
	{
		cout<<"\nString is Unique";
	}
	else
	{
		cout<<"\nString is not unique";
	}
	return 0;
}

