*This project has been created as part of the 42 curriculum by <gproenca>*

# Get Next Line

## 📖 Sobre o projeto

O objetivo do projeto **get_next_line** é implementar uma função capaz de ler um arquivo linha por linha. A cada chamada, a função retorna apenas uma linha, mantendo o restante da leitura para a próxima chamada através de uma variável `static`.

---

## 🛠️ Protótipo

```c
char *get_next_line(int fd);
```

---

## ⚙️ Como funciona

A função lê o arquivo utilizando `read()` e um `BUFFER_SIZE` definido durante a compilação.

Os dados lidos são armazenados em uma string estática (`line_s`), que preserva o conteúdo entre diferentes chamadas da função.

Quando uma quebra de linha (`\n`) é encontrada ou o fim do arquivo é alcançado, a função:

1. Extrai a linha que será retornada.
2. Guarda o restante da string para a próxima chamada.
3. Retorna a linha ao usuário.

---

## 📂 Estrutura do projeto

### `get_next_line()`

É a função principal do projeto.

Responsabilidades:

- validar os argumentos;
- alocar o buffer de leitura;
- ler o arquivo utilizando `read()`;
- concatenar o conteúdo lido em `line_s`;
- chamar `ft_extract()` para separar a linha do restante.

---

### `ft_extract()`

Responsável por separar o conteúdo de `line_s`.

Ela:

- obtém a linha através de `get_line()`;
- obtém o restante através de `get_rest()`;
- libera a antiga `line_s`;
- atualiza `line_s`;
- retorna a linha encontrada.

---

### `get_line()`

Cria uma nova string contendo apenas a primeira linha armazenada em `line_s`, incluindo o caractere `\n` quando ele existir.

---

### `get_rest()`

Cria uma nova string contendo tudo o que permanece após a linha retornada.

Esse conteúdo será utilizado na próxima chamada de `get_next_line()`.

---

### `ft_strjoin()`

Concatena duas strings.

---

### `ft_join_free()`

Concatena duas strings utilizando `ft_strjoin()` e libera a primeira string para evitar vazamentos de memória.

---

### `ft_strchr()`

Procura um caractere dentro de uma string.

Neste projeto é utilizada principalmente para verificar a existência de `\n`.

---

### `ft_strlen()`

Retorna o tamanho de uma string.

---

## 🔄 Fluxo da função

```

get_next_line()
│
├── read()
│
├── ft_join_free()
│
├── encontrou '\n' ?
│ ├── não → continua lendo
│ └── sim
│
└── ft_extract()
├── get_line()
├── get_rest()
└── retorna a linha

```

---

## 📚 Conceitos utilizados

- Variáveis estáticas (`static`)
- Ponteiros
- Alocação dinâmica (`malloc` e `free`)
- Leitura de arquivos (`read`)
- Manipulação de strings
- Gerenciamento de memória