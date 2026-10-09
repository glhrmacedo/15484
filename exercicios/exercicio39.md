Qual será a saída exibida durante a execução do programa abaixo?
 
```c
  int funcao1(int a, int *b)
  {
      int c;
      *b = a - *b;
      a = a + *b;
      c = a * 2;
      return c;
  }
   
  int funcao2(int *a, int b)
  {
      b = *a + b;
      *a = b - *a;
      return b;
  }
   
  int main()
  {
      int a, b, c, d, e, n;
      n = 2735;
      a = (n % 10) + 2;
      b = a % 3;
      c = a;
      d = b;
      printf("a = %d b = %d c = %d d = %d\n", a, b, c, d);
      e = funcao1(c, &d);
      printf("c = %d d = %d e = %d\n", c, d, e);
      e = funcao2(&c, c);
      printf("c = %d e = %d\n", c, e);
      return 0;
  }
```
