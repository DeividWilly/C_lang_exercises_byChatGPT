#include <stdio.h>

int main(){
  int n1, n2;

  printf("Enter a number: "); 
  scanf("%d", &n1);

  printf("Enter one more number: ");
  scanf("%d", &n2);

  printf("%d + %d =\t%d\n", n1, n2, n1+n2);

}
