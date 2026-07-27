*This project has been created as part of the 42 curriculum by gproenca*

# ft_printf

## 📖 Sobre

O **ft_printf** é uma recriação da função `printf()` da biblioteca padrão da linguagem C.

O principal objetivo deste projeto é compreender o funcionamento de funções variádicas e aprender a formatar diferentes tipos de dados utilizando apenas funções permitidas pelo projeto.

---

## 🎯 Objetivos

Durante o desenvolvimento deste projeto foram praticados conceitos como:

- Funções variádicas (`stdarg.h`);
- Manipulação de caracteres e strings;
- Conversão de números para diferentes bases;
- Recursão;
- Ponteiros;
- Organização de código em múltiplos arquivos;
- Criação de bibliotecas estáticas.

---

## 📂 Estrutura do projeto

```text
.
├── Makefile
├── ft_printf.c
├── ft_printf.h
├── ft_print_utils.c
├── ft_print_utilsH.c
└── README.md
```

---

## 📋 Funções implementadas

| Função | Descrição |
|--------|-----------|
| `ft_printf` | Analisa a string de formatação, identifica os especificadores e chama a função responsável por cada conversão. |
| `ft_print_char` | Imprime um único caractere e retorna a quantidade de caracteres impressos. |
| `ft_print_str` | Imprime uma string. Caso ela seja `NULL`, imprime `(null)`. |
| `ft_print_nbr` | Imprime um número inteiro com sinal (`int`) utilizando recursão. |
| `ft_print_unsigned` | Imprime um número inteiro sem sinal (`unsigned int`). |
| `ft_print_hex` | Converte e imprime um número em hexadecimal, podendo utilizar letras minúsculas ou maiúsculas. |
| `ft_print_ptr` | Imprime o endereço de um ponteiro no formato hexadecimal, precedido por `0x`. |

## ⚙️ Compilação

Para compilar o projeto:

```bash
make
```

Será criada a biblioteca:

```text
libftprintf.a
```

---

## 🧹 Comandos disponíveis

```bash
make        # Compila o projeto
make clean  # Remove os arquivos objeto
make fclean # Remove os objetos e a biblioteca
make re     # Recompila todo o projeto
```

---

## 🚀 Conversões implementadas

| Conversão | Descrição |
|-----------|-----------|
| `%c` | Imprime um caractere |
| `%s` | Imprime uma string |
| `%p` | Imprime o endereço de um ponteiro |
| `%d` | Inteiro decimal com sinal |
| `%i` | Inteiro decimal com sinal |
| `%u` | Inteiro decimal sem sinal |
| `%x` | Hexadecimal em letras minúsculas |
| `%X` | Hexadecimal em letras maiúsculas |
| `%%` | Imprime o caractere `%` |

---

## 📚 Conceitos estudados

- Funções variádicas (`va_list`, `va_start`, `va_arg` e `va_end`);
- Recursão;
- Manipulação de ponteiros;
- Conversão de bases numéricas;
- Escrita utilizando `write()`;
- Criação de bibliotecas estáticas;
- Modularização e organização de código.

---

## 📚 Resources

### Referências
- [Manual do printf](https://man7.org/linux/man-pages/man3/printf.3.html)
- [stdarg.h - cppreference](https://en.cppreference.com/w/c/variadic)

### Uso de IA
A IA (Claude e Gemini) foi utilizada como guia de aprendizado para explicar conceitos de funções variádicas, recursão e hexadecimal, e para auxiliar no debugging das funções durante o desenvolvimento.

---

Projeto desenvolvido como parte do **Common Core da 42**.