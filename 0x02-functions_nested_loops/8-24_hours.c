#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 */
void jack_bauer(void)
{
	int hours, minute;
	for (hours = 0; hours < 24; hours++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			printf("%02d:%02d \n", hours, minute);
		}
	}
}
