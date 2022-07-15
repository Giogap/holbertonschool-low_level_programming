#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *  - check code
 * @
 * @
 */

int sum_them_all(const unsigned int n, ...)
  {
    unsigned int i;
    va_list listarg;
    int suma = 0, arg;

    va_start (listarg, n);

    for (i = 0; i < n; i++)
      {
        arg = va_arg(listarg, int);
        suma = suma + arg;
      }

    va_end(listarg);
    ruturn (suma);
}
