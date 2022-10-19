#include "main.h"

/**
 * jack_bauer - function to print hrs and min like the season 24
 * @void: no parameter passed
 *
 * Description: No return is made here
 */
void jack_bauer(void)
{
	int hr;
	int mn;
	int h;
	int m;

	for (hr = 0; hr < 24; hr++)
	{
		for (mn = 0; mn < 60; mn++)
		{
			/** test for hour */
			if (hr <= 9)
				h = 0;
			else if (hr <= 19)
				h = 1;
			else if (hr > 19)
				h = 2;

			/** test for minutes */
			if (mn <= 9)
				m = 0;
			else if (mn <= 19)
				m = 1;
			else if (mn <= 29)
				m = 2;
			else if (mn <= 39)
				m = 3;
			else if (mn <= 49)
				m = 4;
			else if (mn <= 59)
				m = 5;
			_putchar(h + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((m + '0'));
			_putchar((mn % 10) + '0');
			_putchar('\n');
		}
	}
}
