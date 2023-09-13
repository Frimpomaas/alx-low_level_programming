#include "function_pointers.h"
/**
  * print_name - prints out name from a given char
  * @name: pointer to character array of name given
  * @f: function pointer
  *
  * Returrn: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
