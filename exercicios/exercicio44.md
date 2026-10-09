Qual será a saída exibida durante a execução do programa abaixo?
 
```c
  int funcao1(int *a, int *b)
  {
      int c;
      if (*a > *b)
      {
          c = *a;
          *a = *b;
          *b = c;
      }
      *b = *b - *a;
      c = *a + *b;
      return c;
  }
   
  int main()
  {
      int a, b, c, n;
      n = 1921;
      a = 9 - (n % 5);
      b = (n % 5) + 3;
      printf("a = %d b = %d\n", a, b);
      c = funcao1(&a, &b);
      printf("a = %d b = %d c = %d\n", a, b, c);
      c = funcao1(&c, &a);
      printf("a = %d b = %d c = %d\n", a, b, c);
      printf("%c\n", 'A' + c % 26);
      return 0;
  }
```
