#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    size_t v3; // ebx
  int result; // eax
  int v5; // [esp+1Ah] [ebp-32Eh]
  int v6; // [esp+1Eh] [ebp-32Ah]
  int v7; // [esp+22h] [ebp-326h]
  int v8; // [esp+26h] [ebp-322h]
  __int16 v9; // [esp+2Ah] [ebp-31Eh]
  int v10; // [esp+11Ah] [ebp-22Eh]
  char v11[260]; // [esp+11Eh] [ebp-22Ah]
  char v12; // [esp+222h] [ebp-126h]
  int v13; // [esp+326h] [ebp-22h]
  int v14; // [esp+32Ah] [ebp-1Eh]
  int v15; // [esp+32Eh] [ebp-1Ah]
  int v16; // [esp+332h] [ebp-16h]
  __int16 v17; // [esp+336h] [ebp-12h]
  int v18; // [esp+338h] [ebp-10h]
  size_t i; // [esp+33Ch] [ebp-Ch]

  v5 = 1634038338;
  v6 = 1114793323;
  v7 = 75;
  v8 = 0;
  v10 = 0;
  memset(
    (void *)((unsigned int)&v9 & 0xFFFFFFFC),
    0,
    4 * (((unsigned int)((char *)&v8 - ((unsigned int)&v9 & 0xFFFFFFFC) + 248) & 0xFFFFFFFC) >> 2));
  printf("Input flag: ");
  gets(v11);
  strcpy(&v12, v11);
  printf("Input seed: ");
  scanf("%d", &v18);
  srand(v18 % 10);
  if ( strlen(v11) != 17 ) {printf("wrong"); return 0;}
  for ( i = 0; ; ++i )
  {
    v3 = i;
    if ( v3 >= strlen(v11) )
      break;
    v11[i] ^= *((int*)&v5 + rand() % 9);
  }
  v13 = 87699255;
  v14 = 1429864493;
  v15 = 1042940218;
  v16 = 1898135348;
  v17 = 125;
  if ( !strcmp((const char *)&v13, v11) )
  {
    printf("Correct Flag!!! CodeBattle{%s}", &v12);
    result = 0;
  }
  else printf("wrong");
}
