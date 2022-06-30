#include<stdio.h>

/**
 * Prints size of different types
 * of variables based on the computer
 * architechture
 */

int main(){

	char charType;
	int intType;
	long int longIntType;
	long long longLongType;
	float floatType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of a int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longLongType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
	return(0);

}
