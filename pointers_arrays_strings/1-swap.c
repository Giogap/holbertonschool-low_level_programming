#include "main.h"

/**
 * swap_int - Check
 *
 * @a: value poin a
 * @b: value poin b
 */

void swap_int(int *a, int *b)
{
	int vtem;
	vtem = *a;
	*a = *b;
	*b = vtem;
}
