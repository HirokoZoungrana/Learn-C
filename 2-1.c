#include<stdio.h>
#include<math.h>
int main(void){
  //2-1
  /*
  int a=1234;
  double x=123.4, y;
  y=a/10;   printf("%0.2f\n", y);
  y=a/10.0; printf("%0.2f\n", y);
  y=x/10;   printf("%0.2f\n", y);
  y=x/10.0; printf("%0.2f\n", y);

  int a=1, b=2, c;
  c=a+b*3;   printf("%d\n", c);
  c=(a+b)*3; printf("%d\n", c);

  double x, y;
  x=2.0;
  y=sqrt(x);
  printf("%.15f\n", y);
  printf("%.15f\n", y*y);
  y=M_PI;
  printf("%.15f\n", y);

  int ans, n;

  scanf("%d", &n);
  ans=n%1000;
  ans=ans/100;
  printf("%d\n", ans);

  double x;
  scanf("%lf", &x);
  printf("%.5f\n", x*x);
  printf("%.5f\n", sqrt(x));

  double pie=0.0;
  int n;
  scanf("%d", &n);
  pie=2*n*M_PI;
  printf("%.5lf", pie);

  int n;
  scanf("%d", &n);
  if(n >= 1 && n <= 9999){
    n%=1000;
    //n%=100;
    n/=100;
    printf("ans = %d\n", n);
  }else{
    printf("Please enter other number");
  }
  */
  int n, i;
  int ans[4]={0};
  scanf("%d", &n);
  if(n>0 && n<10000){
    ans[0]=n/1000;
    ans[1]=(n%1000)/100;
    ans[2]=(n%100)/10;
    ans[3]=n%10;

    for(i=3; i>=0; i--){
      printf("%d\n", ans[i]);
    }
  }else{
    printf("Please enter a other number!");
  }
  return 0;
  }
