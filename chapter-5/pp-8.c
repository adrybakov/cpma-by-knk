#include <stdio.h>

int main(void){

    int hour, minute, time;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    time = hour * 60 + minute;

    if (time >= (19.0*60.0 + 21.0*60.0 + 45.0) / 2.0 
        || time < ((24.0*60.0 - 21.0*60.0 - 45.0) + 8.0*60.0) / 2.0 - (24.0*60.0 - 21.0*60.0 - 45.0))
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    else if (time < (8.0*60.0 + 9.0*60.0 + 43.0) / 2.0)
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    else if (time < (9.0*60.0 + 43.0 + 11.0*60.0 + 19.0) / 2.0)
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    else if (time < (11.0*60.0 + 19.0 + 12.0*60.0 + 47.0) / 2.0)
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    else if (time < (12.0*60.0 + 47.0 + 14.0*60.0) / 2.0)
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    else if (time < (14.0*60.0 + 15.0*60.0 + 45.0) / 2.0)
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    else if (time < (15.0*60.0 + 45.0 + 19.0*60.0) / 2.0)
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    else if (time < (19.0*60.0 + 21.0*60.0 + 45.0) / 2.0)
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
        

    return 0;
}
