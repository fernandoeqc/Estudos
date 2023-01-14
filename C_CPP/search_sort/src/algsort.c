#include "algsort.h"
#include <stdlib.h>
#include<unistd.h>

void print_vector (int range[], int len_range)
{
    int smalest = range[0];
    for (int i = 0; i < len_range; i++)
    {
        printf("%d, ", range[i]);
    }
    printf("\n");
}

static void print_dinam_chart (int range[], int len_range, int major, int minor)
{
    char * s = "-";

    system("clear");
    for (int i = 0; i < len_range; i++)
    {
        if (major == i) { s = "x"; }
        else if (minor == i) { s = "="; }
        else { s = "|"; }

        printf("|");
        for (int j = 0; j < range[i]; j++)
        {
            printf("%s", s);
        }
        printf("|%d\n", range[i]);
    }
    usleep(200 * 1000);
}

static void print_static_chart(int j)
{
    static int new_i = 0;
    if (j <= new_i)
    {
        printf(".\n");
    }
    new_i = j;

    printf("|");
}

static void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

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
