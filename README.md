
# 🚢 Desafio Batalha Naval - Projeto Completo

Este repositório contém as soluções completas do **Desafio Batalha Naval**, desenvolvido em linguagem C, com implementação dos três níveis: **Novato**, **Aventureiro** e **Mestre**.

---

## 🟢 Nível Novato

### 📋 Descrição

- Tabuleiro 5x5 com matriz bidimensional.
- Posicionamento de dois navios:
  - Um navio **horizontal** (3 posições).
  - Um navio **vertical** (2 posições).
- Impressão no console das **coordenadas ocupadas**.

### 🛠️ Tecnologias

- Linguagem: C
- Compilador recomendado: GCC

### ▶️ Como executar

```bash
gcc batalha_naval_novato.c -o novato
./novato
```

### 📌 Exemplo de Saída

```
Coordenadas do navio horizontal:
(1, 0)
(1, 1)
(1, 2)

Coordenadas do navio vertical:
(2, 3)
(3, 3)
```

---

## 🟡 Nível Aventureiro

### 📋 Funcionalidades

- Tabuleiro representado por uma matriz 10x10.
- Posicionamento automático de **4 navios**:
  - 1 horizontal
  - 1 vertical
  - 1 diagonal principal
  - 1 diagonal secundária
- Exibição completa do tabuleiro com:
  - `0` = posição vazia
  - `3` = parte de navio

### 🧠 Conceitos Aplicados

- Matrizes bidimensionais
- Laços de repetição (`for`)
- Organização de código em funções

### ▶️ Como Executar

```bash
gcc batalha_naval_aventureiro.c -o aventureiro
./aventureiro
```

### 📁 Estrutura do Código

- `gerarTabuleiroAventureiro()`
- `exibirMatriz()`
- `main()`

---

## 🔴 Nível Mestre

### 🎯 Funcionalidades

- Representação de **habilidades especiais** com matrizes 5x5.
- Três padrões:
  - 🔺 Cone
  - ➕ Cruz
  - ♦️ Octaedro
- `1` = área afetada, `0` = não afetada

### 💡 Exemplos

**Cone**
```
0 0 1 0 0
0 1 1 1 0
1 1 1 1 1
0 0 0 0 0
0 0 0 0 0
```

**Cruz**
```
0 0 1 0 0
1 1 1 1 1
0 0 1 0 0
0 0 0 0 0
0 0 0 0 0
```

**Octaedro**
```
0 0 1 0 0
0 1 1 1 0
0 0 1 0 0
0 0 0 0 0
0 0 0 0 0
```

### 🧠 Conceitos Aplicados

- Padrões visuais com matrizes
- Modularização com funções
- Impressão formatada

### ▶️ Como Executar

```bash
gcc batalha_naval_mestre.c -o mestre
./mestre
```

### 📁 Estrutura do Código

- `habilidadeCone()`
- `habilidadeCruz()`
- `habilidadeOctaedro()`
- `exibirMatriz()`

---

## ✍️ Autor

Desenvolvido por [Adriel Cardoso](https://github.com/adrielck)  
Como parte dos estudos em Ciência da Computação e Redes de Computadores.

