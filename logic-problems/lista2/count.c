#include <stdio.h>
int faz_conta_direito(int parcelas, char op)
{
  int resultado;
  int valores;
  int i;
  int sum;

  scanf("%i", &sum);

  for (i = 1; i < parcelas; i++)
  {
    scanf("%i", &valores);

    if (op == '-')
    {
      sum -= valores;
    }
    if (op == '+')
    {
      sum += valores;
    }
  }
  return (sum);
}
int main()
{
  int resultado = faz_conta_direito(4, '-');

  printf("%i\n", resultado);
}