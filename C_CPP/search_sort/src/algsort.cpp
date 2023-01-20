#include "algsort.h"

void selection_sort (int range[], int len_range)
{
    int smalest = 0;
    for (int i = 0; i < len_range; i++)
    {
        for (int j = i+1; j < len_range; j++)
        {
            if (range[smalest] > range[j])
            {
                smalest = j;
            }
            print_dinam_chart(range, len_range, i, j);
            // print_static_chart(j);
        }
        swap(&range[i], &range[smalest]);
    }
}

void bubble_sort (int range[], int len_range)
{
    for (int i = 0; i < len_range - 1; i++)
        for (int j = 0; j < len_range - i - 1; j++)
        {
            if (range[j] > range[j + 1])
            {
                swap(&range[j], &range[j + 1]);
            }
            print_dinam_chart(range,len_range, i, j);
        }
}
