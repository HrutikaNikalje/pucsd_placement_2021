#include <stdio.h>
#include <stdlib.h>
int min(int x, int y) { return (x<y)? x:y;} 
int calAngle(double h, double m)
  {
   if(h<0 || m<0 || h>12|| m>60)
      printf("Wrong Input");
   if(h==12) h=0;
   if(m==60)
   {
    m=0;
    h+=1;
     if (h>12)
       h= h-12;
   }
  int hour_angle= 0.5 * (h*60+m);
  int minute_angle=6*m;
  int angle= abs(hour_angle - minute_angle);
  angle=min(360-angle,angle);
  return angle;
}


int main()
 { 
  printf("%d n", calAngle (9,60));
  printf("%d n", calAngle (3,30));
  return 0;
 }

