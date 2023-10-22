#include "main.h"

/**
 * draw_line - draws a horizontal line of a specified length in the terminal.
 * @length: length of the line to be drawn
 *
 * Return: void
 */

void draw_line(int length)
{
    int i;

    if (length > 0)
    {
        for (i = 0; i < length; i++)
        {
            _put_character(95); // Assuming _put_character is your character printing function
        }

        _put_character('\n');
    }
    else
    {
        _put_character('\n');
    }
}
