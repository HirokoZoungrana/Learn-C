#include<stdio.h>
int main(void){

  //配列の使用例
  /*
  int data[3];

  data[0] = 10;
  data[1] = data[0] + 15;
  data[2] = data[1] * 4;
  printf("data[2] = %d", data[2]);
  */

  //scanfと配列
  /*
  int data[3];
  int i;

  for(i=0; i<3; i++){
    scanf("%d", &data[i]);
  }
  for(i=0; i<3; i++){
    printf("%d\n", data[i] * 10);
  }
  */

  //配列の初期化を行う例
  /*
  int data1[] = {10, 20, 30, 40, 50};
  int data2[5] = {10, 20, 30};
  int data3[5] = {0};

  printf("data1\n");
  for(i=0; i<5; i++){
    printf("%d", data1[i]);
  }
  printf("data2\n");
  for(i=0; i<5; i++){
    printf("%d", data2[i]);
  }
  printf("data3\n");
  for(i=0; i<5; i++){
    printf("%d", data3[i]);
  }
  */

  //配列の要素数のコピー
  /*
  int a[5], b[5];
  int i;

  for(i=0; i<5; i++){
    scanf("%d", &a[i]);
  }
  for(i=0; i<5; i++){
    b[i] = a[i];
  }
  for(i=0; i<5; i++){
    printf("%d", &b[i]);
  }
  */

  //マクロの使用例（省略）

  //配列内の要素数の逆順表示
  /*
  int num[5];
  int re[5];
  int i;

  for(i=0; i<5; i++){
    scanf("%d", &num[i]);
  }

  for(i=0; i<5; i++){
    re[i] = num[5-1-i];
    printf("%d\n", re[i]);
  }
  */

  //配列の平均値（浮動小数点）と、平均値との差
  int num[5];
  int i, sum;
  double sub, ave;

  for(i=0; i<5; i++){
    scanf("%d", &num[i]);
  }

  for(i=0; i<5; i++){
    sum += num[i];
  }
  ave = (double) sum / i;
  for(i=0; i<5; i++){
    printf("%.1f\n", ave);
  }

  for(i=0; i<5; i++){
    sub = (double) num[i] - ave;
    printf("%d:%.1f\n", num[i], sub);
  }

  return 0;
}
