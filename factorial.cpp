#include "functions.h"

int factorial(int n){
	if(n<0)
	{
		printf("Factorial not defined for negatives");
		n=n*-1;
	}
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
