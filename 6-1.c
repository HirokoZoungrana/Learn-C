#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define SIZE 100

int main(void){
  //文字コード
  /*
  char ch ='A';
  printf("%c, %d, %x", ch, ch, ch);
  */

  //1文字単位の入出力
  /*
  char ch;



  while((ch = getchar()) != EOF){
    putchar(ch);
  }
  */

  //文字の配列
  /*
  char str[20];

  str[0] = 'a';
  str[0] = 'b';
  str[0] = 'c';
  str[0] = '\0';
  printf("%s\n", str);
  */

  //文字配列の初期化
  /*
  char str1[] = {'a', 'b', 'c', 'd', '\0'};
  char str2[] = {"ABCD"};

  printf("%s\n", str1);
  printf("%s\n", str2);
  */

  //一行単位の入出力
  /*
  char line[100];

  while(fgets((line, 100, stdin)!=NULL){
    fputs(line, stdout);
  }
  */

  //ライブラリの使用例①
  /*
  ctype.h
  isalpha() : Alphabetかどうかの判定
  islower() : 大文字か、小文字かの判定
  toupper() : 小文字を大文字に変換
  */
  /*
  char c;
  scanf("%c", &c);
  if(isalpha(c)){
    printf("alphabet.\n");
  }else{
    printf("not alphabet.\n");
  }

  if(islower(c)){
    printf("%c\n", toupper(c));
  }
  */

  //ライブラリの使用例②
  /*
  string.h
  strlen() : 文字のカウント
  */
  /*
  char line[SIZE];
  int l;

  while(fgets(line, SIZE, stdin) != NULL){
    l = strlen(line);
    printf("%d\n", l);
  }
  */

  //大文字の出現回数
  /*
  char c;
  int n = 0;

  while(c=(getchar()!=EOF){
    if(c >= 'A' && c <= 'Z'){
      n++;
    }
  }
  printf("%d\n", n);
  */

  //小文字の出現回数
  /*
  char alpha;
  int count = 0;

  while(alpha = (getchar()) != EOF){
    if(alpha >= 'a' && alpha <= 'z'){
      count++;
    }
  }
  printf("%d\n", count);
  */

  //大文字・小文字・数字の出現回数
  /*
  char line;
  int al, AL, count;

  al = AL = count = 0;
  while((line = getchar()) != EOF){
    if(line >= '0' && line <= '9'){
      count++;
    }
    else if(line >= 'a' && line <= 'z'){
      al++;
    }
    else if(line >= 'A' && line <= 'Z'){
      AL++;
    }
  }
  printf("%d\n%d\n%d\n", AL, al, count);
  */

  //文字の変換
  /*
  char line;

  while((line = getchar()) != EOF){

    if(isupper(line)){
      putchar(tolower(line));
    }

    else if(islower(line)){
      putchar(toupper(line));
    }

    else if(isdigit(line)){
      putchar('*');
    }

    else{
      putchar(line);
    }
  }
  */

  //文字配列の逆順表示
  
  char str[100];
  char cpy[100];
  int i, count;

  while((fgets(str, 100, stdin)) != NULL){
    count = 0;
    for(i=0; str != '\0'; i++){
      count++;
    }

    for(i=0; i<count; i++){
      cpy[i] = str[100 - 1 - i];
    }

    for(i=0; i<count; i++){
      printf("%c", cpy[i]);
    }

    printf("\n");
  }

  return 0;
}
