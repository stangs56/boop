#include<stdio.h>
#include<stdlib.h>

double find_avg(int n, int *a);

int main(){
  int n;
  double avg;
  scanf("%d", &n);

  int *a = (int *)malloc(n*sizeof(*a));

  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  avg = find_avg(n, a);

  printf("%.70f\n", avg);


  return 0;
}

double find_avg(int n, int *a){
  double sum;
  sum = a[0];
  for(int i = 1; i < n; i++){
    sum += a[i];
  }
  return (sum/n);
}
