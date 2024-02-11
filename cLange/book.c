#include <stdio.h>
#include <locale.h>
#include <wchar.h>


int main()
{
  wchar_t c;
  int isLowercaseVowel, isUppercaseVowel;
  setlocale(LC_ALL, "ru_RU.UTF8");
  printf("%s", "Введите символ: ");
  scanf("%c", &c);
  isLowercaseVowel = (c == 'a');
  isUppercaseVowel = (c == 'A');
  if(isLowercaseVowel || isUppercaseVowel){
    puts("Введен гласный смивол");
  }
  else{
    puts("Введен согласный символ");
  }

}