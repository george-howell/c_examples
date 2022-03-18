/*
 * main.c
 *
 *  Created on: 18 Mar 2022
 *      Author: George.Howell
 */

#include <stdio.h>

//#define PI					3.14
#define AREA_CIRCLE(x)		(PI*(x)*(x))	// i.e. pi*r^2

#ifndef PI
#define PI					3.14
#endif

//#if PI > 3
//    // conditional codes if expression is non-zero
//#elif expression1
//    // conditional codes if expression is non-zero
//#elif expression2
//    // conditional codes if expression is non-zero
//#else
//    // conditional if all expressions are 0
//#endif

#define DEBUG(...) 			printf(__VA_ARGS__)

int main(void)
{
	printf("The value of PI is %.2f\n", PI);
	printf("The area of a circle of radius %.2f is %.2f\n", 1.2, AREA_CIRCLE(1.2));

	printf("The value of __LINE__ is %d\n", __LINE__);
	printf("The value of __DATE__ is %s\n", __DATE__);
	printf("The value of __FILE__ is %s\n", __FILE__);
	printf("The value of __STDC__ is %d\n", __STDC__);
	printf("The value of __TIME__ is %s\n", __TIME__);
	printf("The value of __func__ is %s\n", __func__);

	DEBUG("test debug\n");

	return 0;
}
