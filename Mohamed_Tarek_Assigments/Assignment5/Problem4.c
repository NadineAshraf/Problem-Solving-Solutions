#include <stdio.h>
struct TIME
{
    int seconds;
    int minutes;
    int hours;
};
void TimeDifference(struct TIME t1, struct TIME t2, struct TIME *diff);
int main()
{
  
   struct TIME StartTime, StopTime, diff;
   printf("Enter Start Time..\n");
   printf("Enter hours, minutes and seconds respectively: ");
   scanf("%d %d %d",&StartTime.hours, &StartTime.minutes, &StartTime.seconds);
   printf("Enter Stop Time..\n");
   printf("Enter hours, minutes and seconds respectively: ");
   scanf("%d %d %d",&StopTime.hours, &StopTime.minutes, &StopTime.seconds);
   TimeDifference(StartTime,StopTime, &diff);
   printf("Time Difference: %d: %d: %d",StartTime.hours,StartTime.minutes,StartTime.seconds);
   printf("\n%d:%d:%d\n",diff.hours,diff.minutes,diff.seconds);
   
   
    return 0;
}
void TimeDifference(struct TIME start, struct TIME stop, struct TIME *diff)
{
    if(stop.seconds > start.seconds)
    {
        --start.minutes;
        start.seconds +=60;
    }
    diff -> seconds = start.seconds - stop.seconds;
    if(stop.minutes > start.minutes)
    {
        --start.hours;
        start.minutes +=60;
    }
    diff -> minutes = start.minutes - stop.minutes;
    diff -> hours = start.hours - stop.minutes;
}
