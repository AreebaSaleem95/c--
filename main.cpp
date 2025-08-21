#include <iostream>
using namespace std;
void sort (arr)
{
	const len=arr.length;
	for(let i=0;i< len;i++)
	{
		letmin Index= i;
		for(let j=i+1;j<len;j++)
		{
			if (arr[j]<arr[minindex])
			{
				min Index=j;
			}
		}
		[arr [i],arr[minindex]]=[arr[mindex],arr[i]];
	}
	return arr;
}

