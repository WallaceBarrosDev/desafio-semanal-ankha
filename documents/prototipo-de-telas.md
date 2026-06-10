# Protótipo de Telas — Sistema Bibliotecário

> Protótipo de baixa fidelidade para sistema em C executado no terminal.  
> As telas usam caracteres ASCII e representam navegação e estrutura de menus.

---

## Fluxo Geral do Sistema

```
Login
└── Menu Principal
    ├── 1. Clientes
    │   ├── 1. Cadastrar Cliente
    │   ├── 2. Consultar Cliente
    │   ├── 3. Atualizar Cliente
    │   └── 4. Remover Cliente
    ├── 2. Livros
    │   ├── 1. Cadastrar Livro
    │   ├── 2. Consultar Livro
    │   ├── 3. Atualizar Livro
    │   ├── 4. Remover Livro
    │   └── 5. Consultar Disponibilidade
    ├── 3. Emprestimos
    │   ├── 1. Registrar Emprestimo
    │   ├── 2. Registrar Devolucao
    │   ├── 3. Renovar Emprestimo
    │   ├── 4. Consultar Emprestimos Ativos
    │   └── 5. Consultar Historico
    ├── 4. Reservas
    │   ├── 1. Reservar Livro
    │   ├── 2. Cancelar Reserva
    │   └── 3. Consultar Reservas Ativas
    ├── 5. Multas
    │   ├── 1. Consultar Multas
    │   ├── 2. Registrar Pagamento
    │   └── 3. Calcular Multa
    ├── 6. Relatorios
    │   ├── 1. Relatorio de Clientes
    │   ├── 2. Relatorio de Livros
    │   ├── 3. Relatorio de Emprestimos
    │   ├── 4. Relatorio de Reservas
    │   └── 5. Relatorio de Multas
    └── 0. Sair
```

---

## Telas

### Tela 01 — Login

```
+--------------------------------------------------+
|             SISTEMA BIBLIOTECARIO               |
+--------------------------------------------------+
| Usuario: _______________________________________ |
| Senha:   _______________________________________ |
|                                                  |
| [ Entrar ]                                       |
| [ Sair   ]                                       |
+--------------------------------------------------+
```

Fluxo: `Login -> Menu Principal`

---

### Tela 02 — Menu Principal

```
+--------------------------------------------------+
|                 MENU PRINCIPAL                   |
+--------------------------------------------------+
| 1 - Clientes                                     |
| 2 - Livros                                       |
| 3 - Emprestimos                                  |
| 4 - Reservas                                     |
| 5 - Multas                                       |
| 6 - Relatorios                                   |
| 0 - Sair                                         |
+--------------------------------------------------+
```

Fluxo: `Menu Principal -> Modulos do sistema`

---

## Modulo: Clientes

### Tela 03 — Menu de Clientes

```
+--------------------------------------------------+
|                MENU DE CLIENTES                  |
+--------------------------------------------------+
| 1 - Cadastrar Cliente                            |
| 2 - Consultar Cliente                            |
| 3 - Atualizar Cliente                            |
| 4 - Remover Cliente                              |
| 0 - Voltar                                       |
+--------------------------------------------------+
```

Fluxo: `Menu Principal -> Clientes`

---

### Tela 04 — Cadastrar Cliente

```
+--------------------------------------------------+
|               CADASTRAR CLIENTE                  |
+--------------------------------------------------+
| Nome:     ______________________________________ |
| CPF:      ______________________________________ |
| Telefone: ______________________________________ |
| E-mail:   ______________________________________ |
| Status:   [Ativo / Inativo]                      |
|                                                  |
| [ Salvar ]  [ Limpar ]  [ Voltar ]               |
+--------------------------------------------------+
```

Fluxo: `Clientes -> Cadastrar Cliente`

---

### Tela 05 — Consultar Cliente

```
+--------------------------------------------------+
|               CONSULTAR CLIENTE                  |
+--------------------------------------------------+
| Buscar por CPF ou Nome: _______________________ |
|                                                  |
| [ Pesquisar ]                                    |
|                                                  |
| Resultado:                                       |
| - ID:        001                                 |
| - Nome:      Joao Silva                          |
| - CPF:       000.000.000-00                      |
| - Status:    Ativo                               |
| - Pendencias: Nenhuma                            |
+--------------------------------------------------+
```

Fluxo: `Clientes -> Consultar Cliente`

---

### Tela 06 — Atualizar Cliente

```
+--------------------------------------------------+
|               ATUALIZAR CLIENTE                  |
+--------------------------------------------------+
| ID do Cliente: _________________________________ |
|                                                  |
| Nome:     ______________________________________ |
| CPF:      ______________________________________ |
| Telefone: ______________________________________ |
| E-mail:   ______________________________________ |
| Status:   [Ativo / Inativo]                      |
|                                                  |
| [ Atualizar ]  [ Voltar ]                        |
+--------------------------------------------------+
```

Fluxo: `Clientes -> Atualizar Cliente`

---

### Tela 07 — Remover Cliente

```
+--------------------------------------------------+
|                REMOVER CLIENTE                   |
+--------------------------------------------------+
| ID do Cliente: _________________________________ |
|                                                  |
| Dados encontrados:                               |
| - Nome:   Joao Silva                             |
| - CPF:    000.000.000-00                         |
| - Status: Ativo                                  |
|                                                  |
| Deseja realmente remover este cliente?           |
| [ Sim ]  [ Nao ]                                 |
+--------------------------------------------------+
```

Fluxo: `Clientes -> Remover Cliente`

---

## Modulo: Livros

### Tela 08 — Menu de Livros

```
+--------------------------------------------------+
|                  MENU DE LIVROS                  |
+--------------------------------------------------+
| 1 - Cadastrar Livro                              |
| 2 - Consultar Livro                              |
| 3 - Atualizar Livro                              |
| 4 - Remover Livro                                |
| 5 - Consultar Disponibilidade                    |
| 0 - Voltar                                       |
+--------------------------------------------------+
```

Fluxo: `Menu Principal -> Livros`

---

### Tela 09 — Cadastrar Livro

```
+--------------------------------------------------+
|                CADASTRAR LIVRO                   |
+--------------------------------------------------+
| Titulo:    _____________________________________ |
| Autor:     _____________________________________ |
| Editora:   _____________________________________ |
| Categoria: _____________________________________ |
| ISBN:      _____________________________________ |
| Qtd.:      _____________________________________ |
|                                                  |
| [ Salvar ]  [ Limpar ]  [ Voltar ]               |
+--------------------------------------------------+
```

Fluxo: `Livros -> Cadastrar Livro`

---

### Tela 10 — Consultar Livro

```
+--------------------------------------------------+
|                CONSULTAR LIVRO                   |
+--------------------------------------------------+
| Buscar por Titulo, Autor ou ISBN: _____________ |
|                                                  |
| [ Pesquisar ]                                    |
|                                                  |
| Resultado:                                       |
| - ID:        010                                 |
| - Titulo:    Banco de Dados                      |
| - Autor:     Carlos Souza                        |
| - Categoria: Tecnologia                          |
| - Status:    Disponivel                          |
+--------------------------------------------------+
```

Fluxo: `Livros -> Consultar Livro`

---

### Tela 11 — Atualizar Livro

```
+--------------------------------------------------+
|                ATUALIZAR LIVRO                   |
+--------------------------------------------------+
| ID do Livro: __________________________________ |
|                                                  |
| Titulo:    _____________________________________ |
| Autor:     _____________________________________ |
| Editora:   _____________________________________ |
| Categoria: _____________________________________ |
| ISBN:      _____________________________________ |
| Status:    [Disponivel / Emprestado / Reservado] |
|                                                  |
| [ Atualizar ]  [ Voltar ]                        |
+--------------------------------------------------+
```

Fluxo: `Livros -> Atualizar Livro`

---

### Tela 12 — Remover Livro

```
+--------------------------------------------------+
|                 REMOVER LIVRO                    |
+--------------------------------------------------+
| ID do Livro: __________________________________ |
|                                                  |
| Dados encontrados:                               |
| - Titulo: Banco de Dados                         |
| - Autor:  Carlos Souza                           |
| - Status: Disponivel                             |
|                                                  |
| Deseja realmente remover este livro?             |
| [ Sim ]  [ Nao ]                                 |
+--------------------------------------------------+
```

Fluxo: `Livros -> Remover Livro`

---

### Tela 13 — Consultar Disponibilidade

```
+--------------------------------------------------+
|           CONSULTAR DISPONIBILIDADE              |
+--------------------------------------------------+
| Buscar por Titulo, ISBN ou ID: ________________ |
|                                                  |
| [ Pesquisar ]                                    |
|                                                  |
| Resultado:                                       |
| - Livro:   Banco de Dados                        |
| - Situacao: Disponivel                           |
| - Exemplar: 01                                   |
| - Reserva:  Nenhuma                              |
+--------------------------------------------------+
```

Fluxo: `Livros -> Consultar Disponibilidade`

---

## Modulo: Emprestimos

### Tela 14 — Menu de Emprestimos

```
+--------------------------------------------------+
|              MENU DE EMPRESTIMOS                 |
+--------------------------------------------------+
| 1 - Registrar Emprestimo                         |
| 2 - Registrar Devolucao                          |
| 3 - Renovar Emprestimo                           |
| 4 - Consultar Emprestimos Ativos                 |
| 5 - Consultar Historico                          |
| 0 - Voltar                                       |
+--------------------------------------------------+
```

Fluxo: `Menu Principal -> Emprestimos`

---

### Tela 15 — Registrar Emprestimo

```
+--------------------------------------------------+
|             REGISTRAR EMPRESTIMO                 |
+--------------------------------------------------+
| ID do Cliente: _________________________________ |
| ID do Livro:   _________________________________ |
|                                                  |
| Verificar cliente e disponibilidade              |
|                                                  |
| Data do Emprestimo:          ___/___/_____       |
| Data Prevista de Devolucao:  ___/___/_____       |
|                                                  |
| [ Confirmar ]  [ Voltar ]                        |
+--------------------------------------------------+
```

Fluxo: `Emprestimos -> Registrar Emprestimo`

---

### Tela 16 — Registrar Devolucao

```
+--------------------------------------------------+
|             REGISTRAR DEVOLUCAO                  |
+--------------------------------------------------+
| ID do Emprestimo: ______________________________ |
|                                                  |
| Dados encontrados:                               |
| - Cliente:       Joao Silva                      |
| - Livro:         Banco de Dados                  |
| - Data prevista: ___/___/_____                   |
| - Atraso:        Sim / Nao                       |
| - Multa:         R$ 0,00                         |
|                                                  |
| [ Confirmar devolucao ]  [ Voltar ]              |
+--------------------------------------------------+
```

Fluxo: `Emprestimos -> Registrar Devolucao`

---

### Tela 17 — Renovar Emprestimo

```
+--------------------------------------------------+
|              RENOVAR EMPRESTIMO                  |
+--------------------------------------------------+
| ID do Emprestimo: ______________________________ |
|                                                  |
| Verificar se a renovacao e permitida             |
|                                                  |
| Nova Data Prevista de Devolucao: ___/___/_____   |
|                                                  |
| [ Confirmar ]  [ Voltar ]                        |
+--------------------------------------------------+
```

Fluxo: `Emprestimos -> Renovar Emprestimo`

---

### Tela 18 — Consultar Emprestimos Ativos

```
+--------------------------------------------------+
|          CONSULTAR EMPRESTIMOS ATIVOS            |
+--------------------------------------------------+
| Buscar por Cliente ou Livro: __________________ |
|                                                  |
| [ Pesquisar ]                                    |
|                                                  |
| Resultado:                                       |
| - ID Emprestimo: 1001                            |
| - Cliente:       Joao Silva                      |
| - Livro:         Banco de Dados                  |
| - Devolucao:     ___/___/_____                   |
+--------------------------------------------------+
```

Fluxo: `Emprestimos -> Consultar Emprestimos Ativos`

---

### Tela 19 — Consultar Historico de Emprestimos

```
+--------------------------------------------------+
|        CONSULTAR HISTORICO DE EMPRESTIMOS        |
+--------------------------------------------------+
| Buscar por Cliente: ___________________________ |
|                                                  |
| [ Pesquisar ]                                    |
|                                                  |
| Resultado:                                       |
| - Emprestimo 1001 | Livro X | Devolvido          |
| - Emprestimo 1002 | Livro Y | Em atraso          |
+--------------------------------------------------+
```

Fluxo: `Emprestimos -> Consultar Historico`

---

## Modulo: Reservas

### Tela 20 — Menu de Reservas

```
+--------------------------------------------------+
|                 MENU DE RESERVAS                 |
+--------------------------------------------------+
| 1 - Reservar Livro                               |
| 2 - Cancelar Reserva                             |
| 3 - Consultar Reservas Ativas                    |
| 0 - Voltar                                       |
+--------------------------------------------------+
```

Fluxo: `Menu Principal -> Reservas`

---

### Tela 21 — Reservar Livro

```
+--------------------------------------------------+
|                 RESERVAR LIVRO                   |
+--------------------------------------------------+
| ID do Cliente: _________________________________ |
| ID do Livro:   _________________________________ |
|                                                  |
| Verificar disponibilidade e regras               |
|                                                  |
| Data da Reserva:    ___/___/_____                |
| Prazo de Retirada:  ___/___/_____                |
|                                                  |
| [ Confirmar ]  [ Voltar ]                        |
+--------------------------------------------------+
```

Fluxo: `Reservas -> Reservar Livro`

---

### Tela 22 — Cancelar Reserva

```
+--------------------------------------------------+
|                 CANCELAR RESERVA                 |
+--------------------------------------------------+
| ID da Reserva: _________________________________ |
|                                                  |
| Dados encontrados:                               |
| - Cliente: Joao Silva                            |
| - Livro:   Banco de Dados                        |
| - Status:  Ativa                                 |
|                                                  |
| Deseja cancelar esta reserva?                    |
| [ Sim ]  [ Nao ]                                 |
+--------------------------------------------------+
```

Fluxo: `Reservas -> Cancelar Reserva`

---

### Tela 23 — Consultar Reservas Ativas

```
+--------------------------------------------------+
|            CONSULTAR RESERVAS ATIVAS             |
+--------------------------------------------------+
| Buscar por Cliente ou Livro: __________________ |
|                                                  |
| [ Pesquisar ]                                    |
|                                                  |
| Resultado:                                       |
| - Reserva 2001 | Joao Silva | Banco de Dados     |
| - Reserva 2002 | Maria Lima | Algoritmos         |
+--------------------------------------------------+
```

Fluxo: `Reservas -> Consultar Reservas Ativas`

---

## Modulo: Multas

### Tela 24 — Menu de Multas

```
+--------------------------------------------------+
|                  MENU DE MULTAS                  |
+--------------------------------------------------+
| 1 - Consultar Multas                             |
| 2 - Registrar Pagamento                          |
| 3 - Calcular Multa                               |
| 0 - Voltar                                       |
+--------------------------------------------------+
```

Fluxo: `Menu Principal -> Multas`

---

### Tela 25 — Consultar Multas

```
+--------------------------------------------------+
|                CONSULTAR MULTAS                  |
+--------------------------------------------------+
| ID do Cliente: _________________________________ |
|                                                  |
| [ Pesquisar ]                                    |
|                                                  |
| Resultado:                                       |
| - Cliente:         Joao Silva                    |
| - Multas em aberto: 2                            |
| - Total:           R$ 7,00                       |
+--------------------------------------------------+
```

Fluxo: `Multas -> Consultar Multas`

---

### Tela 26 — Registrar Pagamento

```
+--------------------------------------------------+
|              REGISTRAR PAGAMENTO                 |
+--------------------------------------------------+
| ID do Cliente: _________________________________ |
| Valor Pago:    _________________________________ |
|                                                  |
| Multas encontradas:                              |
| - Total em aberto: R$ 7,00                       |
|                                                  |
| [ Confirmar Pagamento ]  [ Voltar ]              |
+--------------------------------------------------+
```

Fluxo: `Multas -> Registrar Pagamento`

---

### Tela 27 — Calcular Multa

```
+--------------------------------------------------+
|                 CALCULAR MULTA                   |
+--------------------------------------------------+
| ID do Emprestimo: ______________________________ |
|                                                  |
| Data prevista:     ___/___/_____                 |
| Data de devolucao: ___/___/_____                 |
| Dias de atraso:    ___                           |
| Multa total:       R$ ___,___                    |
|                                                  |
| [ Confirmar ]  [ Voltar ]                        |
+--------------------------------------------------+
```

Fluxo: `Multas -> Calcular Multa`

---

## Modulo: Relatorios

### Tela 28 — Menu de Relatorios

```
+--------------------------------------------------+
|                MENU DE RELATORIOS                |
+--------------------------------------------------+
| 1 - Relatorio de Clientes                        |
| 2 - Relatorio de Livros                          |
| 3 - Relatorio de Emprestimos                     |
| 4 - Relatorio de Reservas                        |
| 5 - Relatorio de Multas                          |
| 0 - Voltar                                       |
+--------------------------------------------------+
```

Fluxo: `Menu Principal -> Relatorios`

---

### Tela 29 — Relatorio de Clientes

```
+--------------------------------------------------+
|             RELATORIO DE CLIENTES                |
+--------------------------------------------------+
| [ Gerar Relatorio ]                              |
|                                                  |
| ID | Nome          | CPF            | Status     |
|----|---------------|----------------|------------|
| 01 | Joao Silva    | 000...         | Ativo      |
| 02 | Maria Lima    | 111...         | Inativo    |
+--------------------------------------------------+
```

Fluxo: `Relatorios -> Relatorio de Clientes`

---

### Tela 30 — Relatorio de Livros

```
+--------------------------------------------------+
|               RELATORIO DE LIVROS                |
+--------------------------------------------------+
| [ Gerar Relatorio ]                              |
|                                                  |
| ID | Titulo             | Status                 |
|----|--------------------|-----------------------|
| 10 | Banco de Dados     | Disponivel             |
| 11 | Algoritmos         | Emprestado             |
+--------------------------------------------------+
```

Fluxo: `Relatorios -> Relatorio de Livros`

---

### Tela 31 — Relatorio de Emprestimos

```
+--------------------------------------------------+
|            RELATORIO DE EMPRESTIMOS              |
+--------------------------------------------------+
| [ Gerar Relatorio ]                              |
|                                                  |
| ID   | Cliente     | Livro            | Status   |
|------|-------------|------------------|----------|
| 1001 | Joao Silva  | Banco de Dados   | Ativo    |
| 1002 | Maria Lima  | Algoritmos       | Atraso   |
+--------------------------------------------------+
```

Fluxo: `Relatorios -> Relatorio de Emprestimos`

---

### Tela 32 — Relatorio de Reservas

```
+--------------------------------------------------+
|              RELATORIO DE RESERVAS               |
+--------------------------------------------------+
| [ Gerar Relatorio ]                              |
|                                                  |
| ID   | Cliente     | Livro            | Status   |
|------|-------------|------------------|----------|
| 2001 | Joao Silva  | Banco de Dados   | Ativa    |
| 2002 | Maria Lima  | Algoritmos       | Cancelada|
+--------------------------------------------------+
```

Fluxo: `Relatorios -> Relatorio de Reservas`

---

### Tela 33 — Relatorio de Multas

```
+--------------------------------------------------+
|               RELATORIO DE MULTAS                |
+--------------------------------------------------+
| [ Gerar Relatorio ]                              |
|                                                  |
| Cliente     | Valor Total | Status               |
|-------------|-------------|----------------------|
| Joao Silva  | R$ 7,00     | Em aberto            |
| Maria Lima  | R$ 0,00     | Quitada              |
+--------------------------------------------------+
```

Fluxo: `Relatorios -> Relatorio de Multas`

---

## Tela 34 — Saida do Sistema

```
+--------------------------------------------------+
|                      SAIR                        |
+--------------------------------------------------+
| Deseja realmente encerrar o sistema?             |
|                                                  |
| [ Sim ]  [ Nao ]                                 |
+--------------------------------------------------+
```
