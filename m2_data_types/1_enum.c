#include <stdio.h>

enum Days {
    SUNDAY,
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY = 20,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Days my_day = SUNDAY;
    printf("Sunday is %d\n", my_day);

    my_day = THURSDAY;
    printf("Thursday is %d\n", my_day);

    my_day = SATURDAY;
    printf("Saturday is %d\n", my_day);

    return 0;
}