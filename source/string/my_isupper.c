/*
 * my_isupper.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <unixlib.h>
#include <unixlib-string.h>

/*
 * This function returns SUCCESS if
 * the argument is an upper case ASCII
 * character, and FAILURE if not.
 *
 */

int my_isupper(const int c)
{
  return (((c > 64) && (c < 91)) ? TRUE : FALSE);
}
