#include <stdio.h>

int main(void){
  int n;
  int calculate;

  printf("Enter a number: ");
  scanf("%d", &n);

  calculate = n % 2;

  if (calculate == 0){
    printf("%d is an even number!\n", n);
  } else{
    printf("%d is an odd number!\n", n);
  }
}
