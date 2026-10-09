Qual será a saída exibida durante a execução do programa abaixo?
 
```c
  float funcao1(int *a, int b)
  {
      float c;
      c = *a + b + 1;
      *a = c / 2;
      c = c / 4;
      return c;
  }
   
  int main()
  {
      int a, b, d, n;
      float f;
      n = 7516;
      d = n % 10;
      a = (d % 4) + 2;
      b = 8 - (d % 3);
      printf("d = %d a = %d b = %d\n", d, a, b);
      f = funcao1(&b, a);
      printf("a = %d b = %d f = %f\n", a, b, f);
      if (a < b && 2 * a > b)
          printf("verdadeiro\n");
      else
          printf("falso\n");
      printf("%c %c\n", 'a' + b % 26, '0' + a % 10);
      return 0;
  }
```
