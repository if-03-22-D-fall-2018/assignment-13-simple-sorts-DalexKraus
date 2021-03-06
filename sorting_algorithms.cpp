/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include "general.h"

void bubble_sort(int* numbers, unsigned long length)
{
    bool swapped;
    int temp;
    do {
        swapped = false;
        for (int i = 0; i < length - 1; i++)
        {
            if (numbers[i] > numbers[i + 1])
            {
                temp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temp;
                swapped = true;
            }
        }
    } while (swapped);
}

void insertion_sort(int* numbers, unsigned long length)
{
    unsigned long j;
    int key;
    for (unsigned long i = 1; i < length; i++)
    {
        j = i;
        while (j > 0 && numbers[j - 1] > numbers[j])
        {
            key = numbers[i];
            j = i - 1;
            while (j >= 0 && numbers[j] > key)
            {
                numbers[j + 1] = numbers[j];
                j--;
            }
            numbers[j + 1] = key;
        }
    }
}

void init_random(int* numbers, unsigned long length)
{
   srandom(time(NULL));
   for (unsigned long i = 0; i < length; i++)
   {
       numbers[i] = random();
   }
}
