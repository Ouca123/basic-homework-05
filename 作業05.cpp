#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int hour;
  int min;
  int sec;
  printf("��J��");
  scanf("%d",&hour);
  printf("��J��");
  scanf("%d",&min);
  printf("��J��");
  scanf("%d",&sec);
  printf("%d��:%d��:%d��\n",hour,min,sec); 
  int hour2;
  int min2;
  int sec2;
  printf("��J��");
  scanf("%d",&hour2);
  printf("��J��");
  scanf("%d",&min2);
  printf("��J��");
  scanf("%d",&sec2);
  printf("%d��:%d��:%d��\n",hour2,min2,sec2);
  int hh = (hour - hour2) * 3600;
  int mm = (min - min2) * 60 ;
  int ss = (sec - sec2);
  int t = hh + mm + ss;
  printf("��Ʈt��:%d",t);    
  system("PAUSE"); 
  return 0;
}
