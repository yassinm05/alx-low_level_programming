#include "main.h"
#include <
/**
 * jack_bauer - Entry point
 *
 * @n :is a parameter
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int first ;
	
	int second ;
	
	int third ;
	
	int fourth ;
	
	for (first = 0; first <= 2; first++)
	{
		for (second = 0; second <= 3; second++)
		{
			for (third = 0; third <= 5; third++)
			{
				for (fourth = 0; fourth <= 9; fourth++)
				{
					printf("%d%d:%d%d\n",first,second,third,fourth);
				}
			}
		}
	}
}
