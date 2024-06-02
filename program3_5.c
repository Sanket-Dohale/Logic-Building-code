#include<stdio.h>
#include<stdbool.h>

char ChkVowel(char cValue1)
{
    if((cValue1 == 'a') || (cValue1 == 'A') || (cValue1 == 'e') || (cValue1 == 'E') || (cValue1 == 'i') || (cValue1 == 'I') || (cValue1 == 'o') || (cValue1 == 'O') || (cValue1 == 'u') || (cValue1 == 'U') )
    {
       return true;
    }

    else
    {
        return false;
    }
}

int main()
{
  char cValue = '\0';
  bool bRet = false;

  printf("Enter character : \n");
  scanf("%c",&cValue);

  bRet = ChkVowel(cValue);

  if(bRet == true)
  {
    printf("%c is vowel\n",cValue);
  }

  else
  {
    printf("%c is not vowel\n",cValue);
  }

    return 0;
}