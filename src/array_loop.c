/*
Array: is a data structure. 
It allows to store multiple values 
of a single type.
Values are stored in contiguous memory
locations. 
*/

#include<stdio.h>

int main(void)
{
	int array[]={12, 5, 7, 9, 13};

	int sum;

	printf("%d \n", array[0]);

	array[1] = array[1] + 1;

	printf("%d \n", array[1]);

	array[3]= -2;


	array[0]++;  // array[0] += 3;

	array[0] + 3;

	printf("%d\n", array[0]);


	return 0;
}


