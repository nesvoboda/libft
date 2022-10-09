#ifndef MICROTEST_H
#define MICROTEST_H
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int failureLine = 0;
const char *failureFile;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wformat"

void print_diff_str(const char *a, const char *b)
{

    printf("Expected %s, but got: %s\n", a, b);
}

void print_diff_ptr(void *a, void *b)
{
    printf("Expected %p, but got: %p\n", a, b);
}

void print_diff_int(int a, int b)
{
    printf("Expected %d, but got: %d\n", a, b);
}

#pragma GCC diagnostic pop

#define ASSERT_STR_EQ(expected, actual)                                 \
    {                                                                   \
        failureLine = __LINE__;                                         \
        failureFile = __FILE__;                                         \
        if (strcmp(expected, actual) != 0)                              \
        {                                                               \
            print_diff_str(expected, actual);                           \
            printf("In file: %s, line %d\n", failureFile, failureLine); \
            exit(1);                                                    \
        }                                                               \
    }

#define ASSERT_INT_EQ(expected, actual)                                 \
    {                                                                   \
        failureLine = __LINE__;                                         \
        failureFile = __FILE__;                                         \
        if (expected != actual)                                         \
        {                                                               \
            print_diff_int(expected, actual);                           \
            printf("In file: %s, line %d\n", failureFile, failureLine); \
            exit(1);                                                    \
        }                                                               \
    }

#define ASSERT_PTR_EQ(expected, actual)                                 \
    {                                                                   \
        failureLine = __LINE__;                                         \
        failureFile = __FILE__;                                         \
        if (expected != actual)                                         \
        {                                                               \
            print_diff_ptr(expected, actual);                           \
            printf("In file: %s, line %d\n", failureFile, failureLine); \
            exit(1);                                                    \
        }                                                               \
    }

#endif