Qual será a saída exibida durante a execução do programa abaixo?
 
```c
  void funcao1(int *a, int *b)
  {
      *a = *a + 3;
      *b = *a * 2;
  }
   
  float funcao2(int *a, int b)
  {
      int c;
      float d;
      c = *a;
      *a = b;
      b = c;
      d = (*a - b) / 4.0;
      return d;
  }
   
  int main()
  {
      int a, b, n;
      float f;
      n = 8413;
      a = (n % 5) + 1;
      b = a + 3;
      printf("a = %d b = %d\n", a, b);
      funcao1(&a, &b);
      printf("a = %d b = %d\n", a, b);
      a = (n % 5) + 1;
      funcao1(&a, &a);
      printf("a = %d b = %d\n", a, b);
      a = (n % 5) + 1;
      b = a + 5;
      f = 2 * funcao2(&a, b + 1);
      printf("a = %d b = %d f = %f\n", a, b, f);
      return 0;
  }
```
