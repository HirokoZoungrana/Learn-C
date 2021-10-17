#include<stdio.h>
int main(void){
  //1
  //アドレスを参照する変換指定文字列
  /*
  int a = 5;
  double x = 12.3;
  //%p　変数のポインタを返す
  printf("&a:%p, a:%d\n", &a, a);
  printf("&x:%p, x:%f\n", &x, x);
  */

  //2
  int a = 5;
  int *p;

  p = &a;
  printf("a:%d\n", *p);

  *p = 10;
  printf("a:%d\n", *p);
}
