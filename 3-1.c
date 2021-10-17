#include<stdio.h>
#include<math.h>
int main(void){

  //if文の基礎
  /*
  int n;
  scanf("%d", &n);
  if(n<10){
    printf("%d < 10\n", n);
  }else{
    printf("%d >= 10\n", n);
  }
  */

  //等価演算子
  /*
  int a=5;
  printf("%d\n", a>0);
  printf("%d\n", a<=3);
  printf("%d\n", a!=3);
  */

  //論理演算子
  /*
  int a=3, b=5;
  //論理積
  printf("AND\n");
  printf("%d\n", a>0 && b<7);
  printf("%d\n", a==2 && b>=3);
  //論理和
  printf("OR\n");
  printf("%d\n", a>0 || b<7);
  printf("%d\n", a==2 || b>=3);
  printf("%d\n", a<2 || b>8);
  //論理否定
  printf("NOT\n");
  printf("%d\n", !(a>0));
  printf("%d\n", !(b>10));
  */

  //switch文
  /*
  int n;
  scanf("%d", &n);
  switch (n){
    case 1:
      printf("n : 1\n");
      break;
    case 2:
      printf("n : 2\n");
    case 3:
    case 4:
      printf("n: 3 or 4\n");
      break;
    default:
      printf("other number");
    }
  */

  //例題の回答例
  /*
  int n;
  scanf("%d", &n);
  if((10<=n)&&(n<100)){
    printf("y\n");
  }else{
    printf("n\n");
  }
  */

  //例題の回答例　if-else文
  /*
  int n;
  scanf("%d", &n);
  if(n>=90)      printf("S\n");
  else if(n>=80) printf("A\n");
  else if(n>=70) printf("B\n");
  else if(n>=60) printf("C\n");
  else           printf("F\n");
  */

  //例題の回答例　偶数と奇数
  /*
  int n;
  scanf("%d", &n);
  switch(n % 2){
    case 0:
      printf("even\n");
      break;
    case 1:
      printf("odd\n");
      break;
  }
  */

  //整数が4桁かどうかを確かめるプログラム
  /*
  int n;
  scanf("%d", &n);
  if(n>999 && n<9999){
    printf("y\n");
  }else{
    printf("n\n");
  }
  */

  //季節
  /*
  int n;
  printf("What month is it now\n");
  scanf("%d", &n);
  if(n>=3 && n<=5)              printf("Spring");
  else if(n>=6 && n<=8)         printf("Summer");
  else if(n>=9 && n<=11)        printf("Autumn");
  else if((n>0 && n<=2)||n==12) printf("Winter");
  else                          printf("none");
  */

  //最大値
  /*
  int n[3];
  int i, max;
  for(i=0; i<3; i++){
    scanf("%d", &n[i]);
  }
  max = 0;
  for(i=0; i<3; i++){
    if(n[i]>max){
      max=n[i];
    }
  }
  printf("%d\n", max);
  */

  //三角形の面積（ヘロンの公式）
  /*
  int a, b, c;
  float s = 0.0;
  float S = 0.0;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  if((a+b>c && a+c>b) && b+c>a){
    s = (float)(a+b+c)/2;
    S = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f", S);
  }else{
    printf("0\n");
  }
  */
  

  return 0;
}
