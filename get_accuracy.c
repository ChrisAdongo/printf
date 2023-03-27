#include "main.h"

/**
 * get_accuracy - Calculates the accuracy for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Accuracy.
 */
int get_accuracy(const char *format, int *i, va_list list)
{
	int curr_i = *i + 1;
	int accuracy = -1;

	if (format[curr_i] != '.')
		return (accuracy);

	accuracy = 0;

	for (curr_i += 1; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
			accuracy *= 10;
			accuracy += format[curr_i] - '0';
		}
		else if
		(format[curr_i] == '*')
		{
			curr_i++;
			accuracy = va_arg(list, int);
			break;
	}
	else
		break;
	}

	*i = curr_i - 1;

	return (accuracy);
}

