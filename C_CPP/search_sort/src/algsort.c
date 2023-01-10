#include "algsort.h"
#include <stdlib.h>
#include<unistd.h>

void print_vector (char range[], int len_range)
{
    char smalest = range[0];
    for (int i = 0; i < len_range; i++)
    {
        printf("%d, ", range[i]);
    }
    printf("\n");
}

void print_dinam_chart (char range[], int len_range, int major, int minor)
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
    usleep(20 * 1000);
}

void print_static_chart(int j)
{
    static int new_i = 0;
    if (j <= new_i)
    {
        printf(".\n");
    }
    new_i = j;

    printf("|");
}

void swap(char *a, char *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selection_sort (char range[], int len_range)
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

void bubble_sort (char range[], int len_range)
{
    int minor = 0, major = len_range;
    int last_major = len_range;
    int first_minor = 0;

    for (int i = 0; i < len_range; i++)
    {
        int tmp_last_major = 0;
        for (int j = minor; j < last_major-1; j++)
        {
            if (range[j] > range[j+1])
            {
                swap(&range[j], &range[j+1]);
                if (first_minor == 0)
                {
                    first_minor = 1;
                    minor = j;
                }
            }
            tmp_last_major = j+1;
            print_dinam_chart(range, len_range, j, j+1);
            // print_static_chart(j);
        }
        last_major = tmp_last_major;
    }
}