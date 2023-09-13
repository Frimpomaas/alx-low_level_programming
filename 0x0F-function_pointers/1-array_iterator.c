#include "function_pointers.h"
/**
  * array_iterator - iterate through a given array of numbers
  * @array: given array
  * @size: size of the array
  * @action: function pointer
  *
  * Return: Nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size != 0 && array && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
