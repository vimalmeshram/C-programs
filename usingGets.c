#include<stdio.h>
#include<string.h>
  int main(){
      char str[20];
      int len=0, i;
      printf("Enter Name: ");
//      scanf("%s", &str);
      gets(str);
      printf("Name: %s \n", str);
      
  for(i=0;str[i]!='\0';i++){
  	len=len+1;
  }
  printf("%d", len);
  
  }
