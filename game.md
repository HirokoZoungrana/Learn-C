# Learn-C
#include<stdio.h>
int main(void){
  int num, save;
  int i;

  puts("数値を入力してください==>");
  while(scanf("%d", &num)==1){
    puts("数当てゲーム！チャンスは10回！");
    for(i=0; i<10; i++){
      puts("数値を入力！==>");
      scanf("%d", &save);

      if(num == save){
        puts("正解です!!");
        break;
      }else if(num > save){
        puts("正解の値は大きいです");
      }else if(num < save){
        puts("正解の値は小さいです");
      }
    }
    puts("続行するには何かキーを押してください");
  }

  return 0;
}
