#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int first;
	int second;
	int third;
	int fourth;

	for (first = 0; first <= 2; first++)
	{
		for (second = 0; second <= 9; second++)
		{
			for (third = 0; third <= 5; third++)
			{
				for (fourth = 0; fourth <= 9; fourth++)
				{
					printf("%d%d:%d%d\n", first, second, third, fourth);
					if (first == 2 && second == 3 && third == 5 && fourth == 9)
						goto end;
				}
			}
		}
	}
end:
}
