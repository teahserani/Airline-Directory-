#include<iostream>
#include<stdlib.h>

using namespace std;

extern void  count_number (int[4][4]);

int main (int argc, char **argv)
{
	int array[4][4]={{0,1,2,3},
		 	 {4,5,6,7},
			 {8,9,0,1},
                         {2,3,4,5}};
	count_number(array);
	
	return 0;
}
