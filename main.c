// main.c


#include <stdio.h>
#include "functions.h"

int main(int argc, char **argv) {

  // TODO: Add your tests here

	int oneHun=200;
        unsigned long num;
        int a,b;
	unsigned long d;
	unsigned long c;
        printf("please enter a number, lets count the Velum: ");
        scanf("%ld",&num);
        printf("the number of Velum is: %d \n",count_vowels(num));
        printf("please enter a number for binary");
        scanf("%ld",&num);
        printf("so it have %d 1s", count_ones(num));
        printf("please enter a number a: ");
        scanf("%d",&a);
        printf("please enter a number b: ");
        scanf("%d",&b);
        printf("so this is the number of a^4-b^4: %ld \n", a4_minus_b4(a,b));
        printf("tell me a fib num: ");
        scanf("%ld",&c);
        printf("%d \n",isFib(c));

//	printf("input a hix num: ");
//	scanf("%x",&d);
//	swap_bytes(d);
//	printf("%x \n",swap_bytes(d));
	
        return 0;
}
