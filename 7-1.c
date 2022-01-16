#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){
  /*
    コマンドラインから入力されたnum個の値
    標準入力から与えられた整数値の逆数値を表示する
  */
  int num, *pum, i;
  int re[] = {0};

  num = atoi(argv[1]);
  pum = calloc(num, sizeof(int));
  if(pum == NULL){
    puts("cannot allocate memory.");
    exit(1);
  }
  for(i=0; i<num; i++){
    scanf("%d", &pum);
  }
  for(i=0; i<num; i++){
    re[i] = pum[num - 1 - i];
  }
  for(i=0; i<num; i++){
    printf("%d\n", re[i]);
  }

  /*
    コマンドラインで与えられる整数の総和
  */
  /*
  pum = calloc(argc, sizeof(int));
  if(pum == NULL){

  }
  */
  return 0;
}
