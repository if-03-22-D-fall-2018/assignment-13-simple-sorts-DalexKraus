/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "stopwatch.h"
#include <time.h>

static clock_t startTime;
static clock_t stopTime;

void start_stopwatch()
{
    startTime = clock();  
}

void stop_stopwatch()
{
    stopTime = clock();
}

double elapsed_time()
{
    double stop = stopTime;

    if (stopTime < startTime)
        stop = clock();

    return (stop - startTime) / CLOCKS_PER_SEC;
}