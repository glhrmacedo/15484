Qual será a saída exibida durante a execução do programa abaixo?
 
```c
  float funcao1(int a, int *b)
  {
      float c;
      *b = *b + a;
      c = *b / 2;
      c = c + 0.5;
      return c;
  }
   
  int funcao2(float *a, int b)
  {
      int c;
      c = *a;
      *a = *a * 2;
      c = c + b % 3;
      return c;
  }
   
  int main()
  {
      int a, b, c, n;
      float f;
      n = 5831;
      a = (n % 5) + 3;
      c = 1;
      f = funcao1(a, &c);
      printf("a = %d c = %d f = %f\n", a, c, f);
      f = 2.5;
      b = funcao2(&f, a);
      printf("a = %d b = %d f = %f\n", a, b, f);
      return 0;
  }
```
