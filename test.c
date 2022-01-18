#include<stdio.h>
#include<string.h>

#define DIGIT 100

int main(void){
  char num[DIGIT];
  int m, a[DIGIT]={0}, multi[DIGIT+1]={0};
  int height, i, r;

  scanf("%s", num);
  height = strlen(num);
  for(i=0; i<height; i++) a[height-1-i] = num[i]-'0';

  scanf("%d", &m);
  r=0;
  i=0;
  while(i<=height){
    r = a[i] * m + r;
    multi[i] = r % 10;
    r = r / 10;
    i++;
  }
  if(r >= 1){
    multi[i] = r;
    height++;
  }
  i = height;
  if(multi[i] == 0) i--;
  for(; i>=0; i--){
    printf("%d", multi[i]);
  }
  printf("\n");
  return 0;
}
