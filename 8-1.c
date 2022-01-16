#include<stdio.h>
#define SIZE 256
int main(int argc, char** argv){
  //ファイルポインタの基礎
  /*
  FILE *fp;
  fp = fopen(argv[1], "r"); //fopen関数でのモードを指定している
  if (fp == NULL){
    printf("%s : file not opened.\n", argv[1]);
    return 1;
  }
  printf("%s : file opened.\n", argv[1]);
  fclose(fp);
  */

  //ファイルからのデータの読み込み 1文字ずつ
  /*
  FILE *fp;
  char c, file[20];

  scanf("%s", file);
  fp = fopen(file, "r");
  if (fp == NULL){
    printf("%s : file not opened.\n", argv[1]);
    return 1;
  }
  while((c = fgetc(fp)) != EOF){
    printf("%c", c);
  }
  printf("\n");
  fclose(fp);
  */

  //ファイルからのデータの読み込み 1行ずつ
  /*
  FILE *fp;
  char file[20], line[256];

  scanf("%s", file);
  fp = fopen(file, "r");
  if (fp == NULL){
    printf("%s : file not opened.\n", argv[1]);
    return 1;
  }
  while(fgets(line, 256, fp) != NULL){  //NULLはファイルの終端を表す
    printf("%s", line);
  }
  printf("\n");
  fclose(fp);
  */

  //ファイルからのデータの読み込み　データ単位
  /*
  FILE *fp;
  int a, b;
  fp = fopen("sample_file_02.txt", "r");
  if (fp == NULL){
    printf("%s : file not opened.\n", argv[1]);
    return 1;
  }
  while(fscanf(fp, "%d %d, &a, &b") == 2){
    printf("%d\n", a + b);
  }
  fclose(fp);
  */

  /*コマンドライン入力にテキストファイル名を入力すると、
    そのテキストファイルの各行の先頭に行番号を付加し、
    標準出力に出力するプログラム。
    出力の際の条件は以下の通り
    ・各行番号は3桁の右詰めで出力する
    ・行番号に続けて「：」を出力し、その直後に行の内容を出力する
  */
  /*
  FILE *fp;
  char line[SIZE];
  int i;

  if((fp = fopen(argv[1], "r")) == NULL){
    printf("Can't open the file.\n");
    return 1;
  }
  for(i=1; fgets(line, SIZE, fp) != NULL; i++){
    printf("%3d:%s", i, line);
  }
  fclose(fp);
  */

  /*
    各行に2個の整数値が記述されたテキストファイルが与えられているとします。
    コマンドラインにこのテキストがいる名を入力すると、そのファイル内の
    各行において大きいほうの整数値を標準出力に出力するプログラムを作成してください。
  */
  /*
  FILE *fp;
  int a, b;

  if((fp = fopen(argv[1], "r")) == NULL){
    printf("Can't open the file.\n");
    return 1;
  }
  while(fscanf(fp, "%d %d", &a, &b) == 2){
    if(a > b){
      printf("%d\n", a);
    }else{
      printf("%d\n", b);
    }
  }
  fclose(fp);
  */

  //ファイルへのデータの書き込み
  /*
  FILE *fp;
  fp = fopen("filename.txt", "w");
  if(fp == NULL){
    printf("file not opened.\n");
    retrun 1;
  }
  //ファイルへのデータ出力の処理
  fclose(fp);
  */

  //ファイルへのデータ出力の例
  FILE *fp;
  int a = 5;
  char c = 'A', s = "abcd";

  fp = stdout;
  fputc(c, fp);
  fputc('\n', fp);

  fputs(s, fp);
  fputs("\n", fp);

  fprintf(fp, "%d %c %s\n", a, c, s);  
  return 0;
}
