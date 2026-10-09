Qual será a saída exibida durante a execução do programa abaixo?
 
```c
  float funcao1(int a)
  {
      float c;
      a = a / 3;
      c = a / 2.0;
      return c;
  }
   
  int funcao2(float *a)
  {
      int c;
      *a = *a * 1.5;
      c = *a;
      return c;
  }
   
  int main()
  {
      int a, b, numero;
      float f;
      printf("Entre com um numero inteiro qualquer: \n");
      scanf("%d", &numero);
      a = (numero % 10) + 10;
      b = 4;
      f = funcao1(a);
      printf("a = %d b = %d f = %f\n", a, b, f);
      f = (numero % 4) + 2.5;
      b = funcao2(&f);
      printf("a = %d b = %d f = %f\n", a, b, f);
      f = funcao1((int) (f * 2));
      printf("a = %d b = %d f = %f\n", a, b, f);
      return 0;
  }
```
