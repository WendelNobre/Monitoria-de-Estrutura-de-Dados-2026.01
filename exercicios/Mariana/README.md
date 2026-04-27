**Mariana** é uma pessoa necessitada de uma solução para o seu problema. E o seu problema era de que o seu sistema estava com uma programação mal acabada. 

No programa dela, era possível fazer várias operações com uma lista encadeada *(inserir no inicio, remover pela posição, imprimir a lista e retornar o tamanho da lista)*, mas não tinha uma funcionalidade de que ela precisava para inserir seus dados corretamente: inserção em algum lugar no meio da lista, por meio de sua posição.

Mariana contratou você (estudante TOP do IDP) para que implemente essa função.

### Objetivo

- Criar uma função que deve inserir elementos a partir desses dados: a **posição** que ele vai ser inserido e o **valor**.

> inserirPelaPosicao(*Qual lista*, *Em que posição*, *Qual valor*);

> Lembre-se de:

- Fazer as verificações e exceções: *Verificar se está vazia, se tem apenas 1 elemento, se a posição for inválida e etc*...

- Verificar se a função do view.h e no controller tenham os mesmo parâmetros...

### Exemplo : 

- Uma lista **{1, 2, 3, 4}**

- A função que você vai criar:
 **inserirPelaPosicao(li,3,5);**

- Lista agora: **{1, 2, 3, 5, 4}**