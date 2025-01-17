#include<stdio.h>
#include<string.h>
  int main(){
      char str[20];
      int len=0, i;
      printf("Enter Name: ");
      scanf("%s", &str);
      printf("Enter Name: %s", str);
      
//      len=strlen(str);
//      printf("%d", len);
 
 //without inbuilt function
  for(i=0;str[i]!='\0';i++){
  	len=len+1;
  }
  printf("%d", len);
  
  }
  
  
