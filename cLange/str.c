#include <stdio.h>
#include <string.h>

int main()
{
  char s1[10] = "Hello";
  char s2[20] = "Hello";

 /*const char *str1Ptr = s1;
  const char *str2Ptr = s2;
  size_t i = 0;
  for(; str1Ptr[i] != '\0' && str2Ptr[i] != '\0'; ++i){
    if(str1Ptr[i] != str2Ptr[i]){
      puts("Strings are not equal!");
      return 0;
    }
  }
  if(str1Ptr[i] != str2Ptr[i]){
    puts("Size are not equal!");
    return 0;
  }
  puts("String are equal");*/
  int result = strcmp(s1, s2);
  if(result == 0){
    printf("%s", "Strings are equal");
  }
  else{
    puts("\nStrings are not equal");
  }

}