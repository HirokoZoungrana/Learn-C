#include<stdio.h>
int main(void){
  //for文の使用例
  /*
  int i, n;
  scanf("%d", &n);
  for(i=0; i<=n; i=i+1){
    printf("%d\n", i);
  }
  printf("====\n");

  for(i=1; i<=n; i=i+1){
    printf("%d\n", i);
  }
  */

  //while文の使用例
  /*
  int i, n;

  scanf("%d", &n);
  i = 0;
  while(i < n){
    printf("%d\n", i);
    i++;
  }
  */

  //while文とdo-while文の使用例
  /*
  int i;
  printf("while\n");

  i = 5;
  while(i < 5){
    printf("%d\n", i);
    i++;
  }

  printf("do-while\n");
  i = 5;
  do {
    printf("%d\n", i);
    i++;
  }while(i < 5);
  */

  //2~1000までの2の倍数の数え上げ
  /*
  int i, sum;

  sum = 0;
  for(i=1; i <= 1000; i++){
    sum += i;
  }
  printf("%d\n", sum);
  */

  //入力された文字数のカウント
  /*
  int d, n;
  scanf("%d", &n);

  d = 0;
  while(n > 0){
    n /= 10;
    d++;
  }

  printf("%d\n", d);
  */

  //mからnまでの二乗
  /*
  int m, n;
  int i;

  scanf("%d", &m);
  scanf("%d", &n);

  for(i=m; i<n; i++){
    pirntf("%d:%d\n", i, i*i);
  }
  */

  //1からnまでのdの倍数の総和
  /*
  int n, d;
  int i;
  int sum;

  scanf("%d%d", &n, &d);
  sum = 0;
  for(i=d; i<=n; i+=d){
    sum += i;
  }
  printf("%d\n", sum);
  */

  //入力された値を一桁ずつ出力
  /*
  int num;
  int firstplace, save;
  int i;

  scanf("%d", &num);

  if(num > 0 && num <= 1000000){
    i = 1;

    while(i <= 1000000){
      save = num / i;
      firstplace = save % 10;
      printf("%d\n", firstplace);
      i *= 10;

      if(num / i ==0){
        break;
      }
    }
  }
  */

  //回文かどうかの判定
  int num, save;
  int copy;

  scanf("%d", &num);
  save = num;

  while(num > 0){
    copy = (copy * 10) + (save % 10);
    save /= 10;
  }

  if(save == num){
    printf("y\n");
  }else if(save != num){
    printf("n\n");
  }
  return 0;
}
