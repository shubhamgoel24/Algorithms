/*Calculate the powerset of a given string
In mathematics, the power set (or powerset) of a set S is the set of all subsets of S, 
including the empty set and S itself*/


#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
void powerset(string s,int i,string curr)
{
	if(i==s.length())
	{
		cout<<curr<<" , ";return;
	}
	powerset(s,i+1,curr+s[i]);
	powerset(s,i+1,curr);
}


main()
{
	
	powerset("Hello",0,"");

return 0;
}

