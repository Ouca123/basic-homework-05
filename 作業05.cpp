#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int hour;
  int min;
  int sec;
  printf("輸入時");
  scanf("%d",&hour);
  printf("輸入分");
  scanf("%d",&min);
  printf("輸入秒");
  scanf("%d",&sec);
  printf("%d時:%d分:%d秒\n",hour,min,sec); 
  int hour2;
  int min2;
  int sec2;
  printf("輸入時");
  scanf("%d",&hour2);
  printf("輸入分");
  scanf("%d",&min2);
  printf("輸入秒");
  scanf("%d",&sec2);
  printf("%d時:%d分:%d秒\n",hour2,min2,sec2);
  int hh = (hour - hour2) * 3600;
  int mm = (min - min2) * 60 ;
  int ss = (sec - sec2);
  int t = hh + mm + ss;
  printf("秒數差為:%d",t);    
  system("PAUSE"); 
  return 0;
}
