#include <stdio.h>

int main() {
    int n,i;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(i=n; i; i--){
      printf("%d\n",i);
    }
    return 0;
}
