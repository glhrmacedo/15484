Qual será a saída exibida durante a execução do programa abaixo?
 
```c
  int funcao1(int a, int *b)
  {
      int c;
      *b = *b - a;
      a = a + *b;
      c = a - *b;
      return c;
  }
   
  int funcao2(int *a, int b)
  {
      int c;
      *a = *a - b;
      b = *a + b;
      c = b - *a;
      return c;
  }
   
  int funcao3(int *a, int b)
  {
      b = *a + b;
      *a = b - *a;
      return b;
  }
   
  int main()
  {
      int a, b, c, d, e, n;
      float f;
      n = 6257;
      a = (n % 10) + 1;
      b = a % 3;
      c = a;
      printf("a = %d b = %d c = %d\n", a, b, c);
      d = b;
      e = funcao1(c, &d);
      printf("a = %d d = %d e = %d\n", a, d, e);
      d = b;
      e = funcao2(&a, d);
      printf("a = %d d = %d e = %d\n", a, d, e);
      a = funcao3(&c, c);
      printf("a = %d b = %d c = %d\n", a, b, c);
      f = d / (b + 1);
      printf("a = %d b = %d f = %f\n", a, b, f);
      f = ((float) (2 * a + 1) / 2);
      e = f;
      printf("d = %d e = %d f = %f\n", d, e, f);
      return 0;
  }
```
