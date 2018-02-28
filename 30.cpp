#include <iostream>
using namespace std;
struct TIME
{
  int seconds;
  int minutes;
  int hours;
};
void computeTimeDifference(struct TIME, struct TIME, struct TIME *);
int main()
{
    struct TIME t1, t2, sub;
{
intTime1;
intTime2;
int hour=10;
int minute=5;
int second=13;
int h;int m;
doubleNtime;
Time1=(3600*5)+(60*30);
Time2=(3600*hour)+(60*minute)+second;
Ntime=Time2-Time1;
Ntime=((Ntime%60)/100+(Ntime/60));
h=(int)(Ntime);
m=((Ntime-h)*100);
printf("hour after subtraction is : %d hour %d min",h,m) 
}
