#include <stdio.h>
#include <string.h>

int main()
{

  char str1[] = "abcdefghijklmnopqrstuvwxyz";
  char str2[27];
  for (int i=0;i<26;i++){
    str2[i] = 'a' + i;
    str1[i] -= 32;
  }
  printf("%s, %s\n", str1, str2);
  if (strcmp(str1, str2) == 0)
    printf("the strings are identical\n");
  else
    printf("the strings are different\n");
 // for (int a=0;a<26;a++){
   // str1[a] -= 32;
 // }
  char str3[53];
  strcpy(str3, str1);
  strcat(str3, str2);
  printf("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);
}
