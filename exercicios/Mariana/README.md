# Inserir dados por posição e ordenação de forma crescente

| Principais arquivos que você vai mexer: ```suasfuncoes.c``` e ```main.c```. 

**Mariana** é uma pessoa necessitada de uma solução para o seu problema. E o seu problema era de que o seu sistema estava com uma programação mal acabada. 

No programa dela, era possível fazer várias operações com uma lista encadeada *(inserir no inicio, remover pela posição, imprimir a lista e retornar o tamanho da lista)*, mas não tinha uma funcionalidade de que ela precisava para inserir seus dados corretamente: inserção em algum lugar no meio da lista, por meio de sua posição. 

**E também**, ela precisa uma forma de ordenar em ordem crescente todos os valores da lista, porque ela quer organizar o dados direitinho.

Mariana contratou você (estudante TOP do IDP) para que implemente essas funções.
___

### **Inserir por posição**

### Objetivo

- Criar uma função que deve inserir elementos a partir desses dados: a **posição** que ele vai ser inserido e o **valor**.

> inserirPelaPosicao(*Qual lista*, *Em que posição*, *Qual valor*);

### Exemplo : 

- Uma lista **{1, 2, 3, 4}**

- A função que você vai criar:
 ```inserirPelaPosicao(li,3,5);```

- Lista agora: **{1, 2, 3, 5, 4}**

___

### **Ordenar em ordem crescente**

### Objetivo

- Criar uma função que deve ordernar toda lista a partir de um dado: a lista.

> ordernarCrescente(*Qual lista*);

### Exemplo : 

- Uma lista **{5, 2, 1, 3, 4}**

- A função que você vai criar:
 ```ordernarCrescente(li);```

- Lista agora: **{1, 2, 3, 4, 5}**

# Dicas:

**Lembre-se de:**

- Fazer as verificações e exceções: *Verificar se está vazia, se tem apenas 1 elemento, se a posição for inválida e etc*...

- Verificar se a função do view.h e no controller tenham os mesmo parâmetros...