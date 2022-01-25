#include<stdio.h>
#include<stdlib.h>

int main(void){
  unsigned long int *p;
  unsigned long int x, n, r, save = 0;
  int i;

  scanf("%lu", &x);
  scanf("%lu", &n);

  save = x;

  p = malloc(n * sizeof(unsigned long int));
  if(p == 0){
    printf("cannot allocate memory.\n");
    exit(1);
  }
  for(i=0; i<n+1; i++) p[i] = 0;
  for(i=0; i<n+1; i++) printf("%d\n", p[i]);

  r = 0;
  for(i=1; i<=n; i++){
    x *= x;
    p[i] = x % 10 + r;
    r = x / 10;
  }
  x *= save;
  printf("%lu\n", x);

  free(p);

  return 0;
}
