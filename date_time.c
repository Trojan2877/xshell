#include<stdio.h>
#include<time.h>

int main()
{
    time_t t;
    time(&t);

    printf("Date and Time: %s\n", ctime(&t));
    return 0;
}
