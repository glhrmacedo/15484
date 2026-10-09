Qual será a saída exibida durante a execução do programa abaixo?
 
```c
  int funcao1(int a, int b)
  {
      int c;
      a = a * 2;
      b = a - b;
      c = a + b;
      return c;
  }
   
  int funcao2(int *a, int b)
  {
      int c;
      *a = *a * 2;
      b = *a - b;
      c = *a + b;
      return c;
  }
   
  int funcao3(int *a, int b)
  {
      b = *a + b;
      *a = b - 1;
      return b;
  }
   
  int main()
  {
      int a, b, c, n;
      n = 3142;
      a = (n % 4) + 1;
      b = a + 3;
      printf("a = %d b = %d\n", a, b);
      c = funcao1(a, b);
      printf("a = %d b = %d c = %d\n", a, b, c);
      c = funcao2(&a, b);
      printf("a = %d b = %d c = %d\n", a, b, c);
      b = funcao3(&b, b);
      printf("a = %d b = %d\n", a, b);
      return 0;
  }
```
