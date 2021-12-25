#include <stdio.h>

int main()
{
  while(1){
    for(int i=0; i<10; i++){
    for(int k=10; k>i-3; k--){
      printf("*");
    }
    printf(" ");
    for(int j=0; j<i; j++){
      printf(" ");
    }
    for(int j=0; j<i; j++){
      printf(" ");
    }
    for(int k=10; k>i-3; k--){
      printf("*");
    }
    printf("\n"); 
  }
  
  for(int i=0; i<10; i++){
    for(int j=0; j<8; j++){
      printf("*");
    }
    for(int j=0; j<11; j++){
      printf(" ");
    }
    for(int j=0; j<8; j++){
      printf("*");
    }
    printf("\n");
  }
  for(int i=0; i<3; i++){
    for(int j=0; j<27; j++){
      printf("*");
    }
    printf("\n");
  }
  }
  return 0;
}
