# 📚 Tipo Abstrato de Dado (TAD) em Estruturas de Dados

## 🧠 O que é um TAD (Tipo Abstrato de Dado)?

Um **Tipo Abstrato de Dado (TAD)** é um modelo matemático que define:
- **Dados**: A estrutura de armazenamento da informação
- **Operações**: As ações que podem ser realizadas com esses dados
- **Comportamento**: Como essas operações interagem com os dados

💡 **Principais características**:
- **Abstração**: Esconde os detalhes de implementação
- **Encapsulamento**: Separa interface (o QUE faz) de implementação (COMO faz)
- **Reutilização**: Pode ser usado em diferentes contextos

### Exemplos comuns de TADs:
- 🧺 Pilhas (LIFO - Last In First Out)
- 🎯 Filas (FIFO - First In First Out)
- 🌳 Árvores Binárias
- 📚 Listas Ligadas

✨ **Por que usar TAD?**
1. Organização melhor do código
2. Facilidade de manutenção
3. Redução de erros
4. Reutilização de código

---

## 🛠️ Como compilar os programas?

Siga os passos com base no seu sistema operacional

### 🐧 Linux

#### 🔄 Compilando via script automatizado

Cada arquivo possui um script `start.sh` que:
- Compila automaticamente cada programa 🚀
- Deleta os executáveis após a execução 🗑️

**Como usar:**  
> Abra o terminal e execute:

```bash
./start.sh
```

#### 🔒 Problema com permissão?

```bash
sudo chmod +x ./start.sh
```

#### 🖥️ Compilação manual

1. Primeiro compile a implementação:
   ```bash
   gcc -c {arquivo_funcoes}.c -o {arquivo_funcoes}.o
   ```

3. Depois compile o programa principal:
   ```bash
   gcc main.c {arquivo_funcoes}.o -lm -o main
   ```
   > ✨ Dica: O parâmetro -lm é essencial para funções matemáticas da math.h!

5. Execute
   ```bash
   ./main
   ```

### 🪟 Windows

#### 📥 Pré-requisitos

Instale o MinGW (compilador GCC para Windows):
> 🔗 [Download MinGW](https://sourceforge.net/projects/mingw/files/)

#### 💻 Como compilar?

Use os mesmos comandos do Linux, mas recomendo usar o PowerShell (mais completo que o CMD padrão).
```bash
gcc -c {arquivo_funcoes}.c -o {arquivo_funcoes}.o
gcc main.c {arquivo_funcoes}.o -lm -o main
.\main.exe
```






