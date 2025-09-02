# Funções

Uma função é um conjunto de instruções agrupadas e organizadas para facilitar o **reuso** ao longo do código.

## Funções na linguagem C

As funções na linguagem C são definidas de acordo com o seguinte formato:

```C
Tipo_de_retorno nome_da_função(lista_de_parâmetros){
    instruções da função….

}
```

---

**Exemplo de uma função sem retorno:**
```C
void imprime(char letra, int qtd){
    int i;
    
    for(i=0; i<qtd; i++)
        printf(“%c”, letra);
}
```

```C
int main(){
    int valor = 10;
    char let = ‘z’;

    imprime(‘a’, 10);
    imprime(let, valor);
}
```

---

**Exemplo de uma função com retorno:**
```C
int potencia(int x, int y){
    int i;
    int pot = 1;

    for(i=0; i<y; i++)
        pot *= x;

    return pot;
}
```

```C
int main(){
    int num1, num2;
    int resultado;

    scanf(“%d %d”, &num1, &num2);

    //Poderiamos usar para atribuir o valor em uma variável
    resultado = potencia(num1, num2);

    //Poderiamos usar em uma expressão aritmética
    resultado = 100 + potencia(num1, num2);

    //Poderiamos usar em uma expressão relacional
    if(potencia(num1, num2) > 100)
        printf(“Que potência!\n”);

    //Poderiamos usar como argumento no printf!
    printf(“O valor da potencia foi: %d”, potencia(num1, num2));
}
```

> As funções podem ser definidas _em qualquer parte do programa_. O importante é que pelo menos **sua assinatura seja definida antes da primeira chamada**, para que ela seja conhecida pelo compilador quando o programa estiver sendo construído.

## Execução e escopo de uma função

Quando uma função é chamada no código em C, o controle da execução é transferido do ponto atual para a função chamada, que executa todas as suas instruções, e então retorna o controle para o ponto original da chamada.

## Funções padrão na linguagem C
A linguagem C possui várias bibliotecas e funções interessantes, que podem ser utilizadas na construção dos programas.

Exemplo de duas bibliotecas:

- [<math.h>](https://petbcc.ufscar.br/math/)
- [<stdlib.h>](https://petbcc.ufscar.br/stdlib/)

**Obs para a stdlib!**

A função _rand()_ é **pseudo-aleatória**. Por isso, precisamos usar a função _srand()_ para mascarar e deixar o _rand()_ mais "aleatório".

E para deixar o _rand()_ ainda mais "aleatório, usamos a função _time()_ da biblioteca _<time.h>_. Essa função, _<time.h>_, retorna a hora atual do computador, em segundos. Ela é usada da seguinte forma: time(NULL).