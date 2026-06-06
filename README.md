# ⚡ Desafio da Semana: Sistema de Conta Bancária

## Fases do projeto

- [x] Definir requisitos
- [x] Definir task
- [ ] Implementação

Crie um programa que simule o funcionamento básico de uma conta bancária.

## 📌 Requisitos

### Cada conta deve possuir
    • Usuário
    • Senha
    • Saldo (em R$ ou €)

### 📌 Antes de acessar o sistema
    • O usuário deve informar usuário e senha
    • O sistema deve permitir apenas um número limitado de tentativas de login
    • Ao atingir o limite, o acesso deve ser bloqueado

### 📌 Após o login, exiba um menu com as opções
    • Consultar saldo
    • Depositar dinheiro
    • Sacar dinheiro
    • Encerrar sessão

### 📌 Regras do sistema
    • O saldo deve ser exibido em reais (R$)
    • Não é permitido sacar valores maiores que o saldo disponível
    • A conta nunca pode ficar negativa
    • Depósitos e saques devem atualizar o saldo corretamente

### 📌 Ao consultar o saldo, o programa deve mostrar
    • Nome do usuário
    • Saldo atual em R$

### ⭐ Bônus
    • Mostrar um histórico das operações realizadas
    • Exibir a quantidade total de depósitos e saques realizados
    • Em caso de bloqueio, definir um time para realizar entrada novamente

## 📌 Task

### TASK01 – Abrir Conta

#### TASK-01 – Criar estrutura da entidade Cliente

- [x] Definir atributos do cliente.
- [x] Implementar construtor da entidade.
- [x] Validar dados obrigatórios.

#### TASK-02 – Criar estrutura da entidade Conta

- [x] Definir atributos da conta.
- [x] Implementar construtor da entidade.
- [x] Implementar método de saque.
- [x] Implementar método de depósito.
- [x] Implementar método de consulta de saldo.

#### TASK-03 – Implementar validação cadastral

- [x] Validar nome.
- [x] Validar e-mail.
- [x] Validar senha.

#### TASK-04 – Implementar abertura de conta

- [x] Receber dados do cliente.
- [x] Executar validações.
- [x] Criar conta.
- [x] Persistir dados.

#### TASK-05 – Implementar mensagens de erro

- [x] Informar dados inválidos.
- [x] Informar campos obrigatórios.

#### Extra - Implementação do peseudo database

- [x] Criar estrutura e atributos.
- [x] Implementar Construtor.
- [x] Criação de usuário.
- [x] Criação de conta.
- [x] acosiação de conta ao usuário.

---

### TASKUS02 – Fazer Login

#### TASK-06 – Implementar autenticação

- [x] Receber credenciais.
- [x] Localizar cliente.
- [x] Validar senha.

#### TASK-07 – Implementar controle de sessão

- [x] Criar sessão autenticada.
- [x] Registrar usuário logado.

#### TASK-08 – Implementar tratamento de falhas de login

- [x] Detectar usuário inexistente.
- [x] Detectar senha incorreta.
- [x] Exibir mensagens apropriadas.

---

### TASK03 – Consultar Saldo

#### TASK-09 – Implementar consulta de saldo

- [x] Recuperar saldo da conta.
- [x] Exibir valor atualizado.

#### TASK-10 – Proteger acesso à consulta

- [x] Verificar autenticação.
- [ ] Bloquear acesso não autorizado.

---

### US04 – Fazer Depósito

#### TASK-11 – Implementar operação de depósito

- [x] Receber valor.
- [x] Validar valor informado.
- [x] Atualizar saldo.

#### TASK-12 – Validar valor do depósito

- [x] Impedir valores negativos.
- [x] Impedir valor zero.

#### TASK-13 – Confirmar operação

- [x] Exibir novo saldo.
- [x] Informar sucesso da operação.

---

### US05 – Fazer Saque

#### TASK-14 – Implementar operação de saque

- [x] Receber valor solicitado.
- [x] Verificar saldo.
- [x] Atualizar saldo.

#### TASK-15 – Implementar validação de saldo

- [x] Comparar saldo disponível.
- [x] Autorizar ou negar saque.

#### TASK-16 – Validar valor do saque

- [x] Impedir saque negativo.
- [x] Impedir saque igual a zero.

#### TASK-17 – Confirmar operação

- [x] Exibir saldo atualizado.
- [x] Informar sucesso da operação.

---

### US06 – Saldo Insuficiente

#### TASK-18 – Implementar tratamento de saldo insuficiente
- [ ] Detectar insuficiência de saldo.
- [ ] Cancelar operação.

#### TASK-19 – Implementar mensagens de erro
- [ ] Informar motivo da falha.
- [ ] Orientar nova tentativa.

---

### US07 – Encerrar Sessão

#### TASK-20 – Implementar logout
- [ ] Encerrar sessão ativa.
- [ ] Limpar dados de autenticação.

#### TASK-21 – Bloquear operações após logout
- [ ] Exigir nova autenticação.
- [ ] Impedir acesso às funcionalidades protegidas.

---

### Infraestrutura e Qualidade

#### TASK-22 – Criar estrutura do projeto

- [x] Organizar diretórios.
- [x] Definir responsabilidades das classes.

#### TASK-23 – Implementar persistência de dados

- [x] Salvar clientes.
- [x] Salvar contas.
- [x] Recuperar informações.

#### TASK-24 – Criar tratamento global de erros

- [ ] Centralizar mensagens.
- [ ] Padronizar exceções.

#### TASK-25 – Documentar regras de negócio

- [ ] Fluxo de abertura de conta.
- [ ] Fluxo de autenticação.
- [ ] Fluxo de movimentação financeira.

## User Stories

### US01 – Abrir Conta

**Como** cliente  
**Quero** abrir uma conta bancária informando meus dados cadastrais  
**Para que** eu possa acessar os serviços bancários do sistema.

#### US01 – Critérios de Aceitação

- [x] O sistema deve solicitar os dados cadastrais obrigatórios.
- [x] O sistema deve validar os dados informados.
- [x] O sistema deve criar uma conta quando os dados forem válidos.
- [x] O sistema deve exibir uma confirmação após a criação da conta.
- [x] O sistema deve informar erros quando os dados forem inválidos.

---

### US02 – Fazer Login

**Como** cliente  
**Quero** autenticar-me no sistema utilizando minhas credenciais  
**Para que** eu possa acessar minha conta bancária.

#### US02 – Critérios de Aceitação

- [x] O sistema deve solicitar email e senha.
- [x] O sistema deve validar as credenciais informadas.
- [x] O sistema deve permitir acesso quando as credenciais forem válidas.
- [x] O sistema deve negar acesso quando as credenciais forem inválidas.
- [x] O sistema deve exibir uma mensagem de erro em caso de falha na autenticação.

---

### US03 – Consultar Saldo

**Como** cliente autenticado  
**Quero** consultar o saldo da minha conta  
**Para que** eu possa acompanhar meus recursos financeiros.

#### US03 - Critérios de Aceitação

- [x] Apenas clientes autenticados podem consultar saldo.
- [x] O sistema deve recuperar o saldo atual da conta.
- [x] O sistema deve exibir o saldo disponível ao cliente.

---

### US04 – Fazer Depósito

**Como** cliente autenticado  
**Quero** depositar valores em minha conta  
**Para que** eu possa aumentar meu saldo disponível.

#### Critérios de Aceitação
- Apenas clientes autenticados podem realizar depósitos.
- O sistema deve solicitar o valor do depósito.
- O sistema deve validar o valor informado.
- O sistema deve atualizar o saldo após a operação.
- O sistema deve confirmar a realização do depósito.

---

### US05 – Fazer Saque

**Como** cliente autenticado  
**Quero** sacar valores da minha conta  
**Para que** eu possa utilizar os recursos disponíveis.

#### Critérios de Aceitação
- Apenas clientes autenticados podem realizar saques.
- O sistema deve solicitar o valor desejado.
- O sistema deve verificar se existe saldo suficiente.
- O sistema deve atualizar o saldo após a operação.
- O sistema deve confirmar a realização do saque.
- O sistema deve impedir saques quando não houver saldo suficiente.

---

### US06 – Receber Notificação de Saldo Insuficiente

**Como** cliente autenticado  
**Quero** ser informado quando não houver saldo suficiente para um saque  
**Para que** eu compreenda o motivo da falha na operação.

#### Critérios de Aceitação
- O sistema deve verificar o saldo antes de efetuar o saque.
- O sistema deve cancelar a operação quando o saldo for insuficiente.
- O sistema deve exibir uma mensagem explicando o motivo da falha.

---

### US07 – Encerrar Sessão

**Como** cliente autenticado  
**Quero** encerrar minha sessão no sistema  
**Para que** minha conta permaneça segura após o uso.

#### Critérios de Aceitação
- O sistema deve permitir o encerramento da sessão.
- O sistema deve invalidar a autenticação atual.
- O sistema deve confirmar o encerramento da sessão.
- O sistema deve exigir novo login para acessar funcionalidades protegidas.

## User Cases

### UC01 – Abrir Conta

**Objetivo:** Permitir que um cliente crie uma nova conta bancária.

**Ator Principal:** Cliente

**Pré-condições:**
- Cliente não possui uma conta cadastrada com os mesmos dados.

**Pós-condições:**
- Conta criada com sucesso.
- Conta disponível para autenticação.

#### Fluxo Principal
1. Cliente seleciona a opção **Abrir Conta**.
2. Sistema solicita os dados cadastrais.
3. Cliente informa os dados necessários.
4. Sistema executa **UC07 – Validar Dados de Cadastro**.
5. Sistema cria a conta.
6. Sistema confirma a operação.

#### Fluxos de Exceção
##### E1 – Dados Inválidos
1. Sistema identifica inconsistências nos dados.
2. Sistema executa **UC08 – Dados Inválidos**.
3. Processo de abertura é interrompido.

---

### UC07 – Validar Dados de Cadastro

**Objetivo:** Garantir que os dados informados atendam às regras de cadastro.

**Ator Principal:** Sistema

**Pré-condições:**
- Dados cadastrais foram informados.

**Pós-condições:**
- Dados validados.

#### Fluxo Principal
1. Sistema verifica campos obrigatórios.
2. Sistema verifica formato dos dados.
3. Sistema aprova os dados para cadastro.

#### Fluxos de Exceção
##### E1 – Falha na Validação
1. Sistema detecta informações inválidas.
2. Retorna falha para o caso de uso solicitante.

---

### UC08 – Dados Inválidos

**Objetivo:** Informar que os dados fornecidos não são válidos.

**Ator Principal:** Sistema

**Pré-condições:**
- Falha na validação cadastral.

**Pós-condições:**
- Cliente informado sobre o erro.

#### Fluxo Principal
1. Sistema exibe mensagem de erro.
2. Sistema solicita correção dos dados.

---

### UC02 – Fazer Login

**Objetivo:** Autenticar um cliente no sistema.

**Ator Principal:** Cliente

**Pré-condições:**
- Conta cadastrada.

**Pós-condições:**
- Sessão autenticada.

#### Fluxo Principal
1. Cliente seleciona **Fazer Login**.
2. Sistema solicita credenciais.
3. Cliente informa usuário e senha.
4. Sistema executa **UC09 – Validar Credenciais**.
5. Sistema concede acesso.

#### Fluxos de Exceção
##### E1 – Credenciais Inválidas
1. Sistema executa **UC10 – Credenciais Inválidas**.
2. Login é rejeitado.

---

### UC09 – Validar Credenciais

**Objetivo:** Verificar a autenticidade das credenciais informadas.

**Ator Principal:** Sistema

**Pré-condições:**
- Credenciais fornecidas.

**Pós-condições:**
- Credenciais aprovadas.

#### Fluxo Principal
1. Sistema localiza a conta.
2. Sistema valida usuário e senha.
3. Sistema confirma autenticação.

#### Fluxos de Exceção
##### E1 – Usuário Não Encontrado
1. Sistema não encontra o usuário informado.

##### E2 – Senha Incorreta
1. Sistema identifica senha inválida.

---

### UC10 – Credenciais Inválidas

**Objetivo:** Informar falha de autenticação.

**Ator Principal:** Sistema

**Pré-condições:**
- Falha na validação das credenciais.

**Pós-condições:**
- Acesso negado.

#### Fluxo Principal
1. Sistema exibe mensagem de erro.
2. Sistema solicita nova tentativa de login.

---

### UC03 – Consultar Saldo

**Objetivo:** Permitir a visualização do saldo da conta.

**Ator Principal:** Cliente

**Pré-condições:**
- Cliente autenticado.

**Pós-condições:**
- Saldo exibido.

#### Fluxo Principal
1. Cliente seleciona **Consultar Saldo**.
2. Sistema recupera o saldo da conta.
3. Sistema exibe o saldo disponível.

---

### UC04 – Fazer Depósito

**Objetivo:** Adicionar valores à conta bancária.

**Ator Principal:** Cliente

**Pré-condições:**
- Cliente autenticado.

**Pós-condições:**
- Saldo atualizado.

#### Fluxo Principal
1. Cliente seleciona **Fazer Depósito**.
2. Cliente informa o valor.
3. Sistema valida o valor informado.
4. Sistema registra o depósito.
5. Sistema atualiza o saldo.
6. Sistema confirma a operação.

---

### UC05 – Fazer Saque

**Objetivo:** Permitir a retirada de valores da conta.

**Ator Principal:** Cliente

**Pré-condições:**
- Cliente autenticado.

**Pós-condições:**
- Saldo atualizado.

#### Fluxo Principal
1. Cliente seleciona **Fazer Saque**.
2. Cliente informa o valor desejado.
3. Sistema executa **UC11 – Verificar Saldo Disponível**.
4. Sistema registra o saque.
5. Sistema atualiza o saldo.
6. Sistema confirma a operação.

#### Fluxos de Exceção
##### E1 – Saldo Insuficiente
1. Sistema executa **UC12 – Saldo Insuficiente**.
2. Operação é cancelada.

---

### UC11 – Verificar Saldo Disponível

**Objetivo:** Garantir que haja saldo suficiente para o saque.

**Ator Principal:** Sistema

**Pré-condições:**
- Valor do saque informado.

**Pós-condições:**
- Saque autorizado.

#### Fluxo Principal
1. Sistema consulta o saldo atual.
2. Sistema compara saldo e valor solicitado.
3. Sistema aprova a operação.

#### Fluxos de Exceção
##### E1 – Saldo Insuficiente
1. Sistema identifica saldo insuficiente.
2. Retorna falha ao caso de uso solicitante.

---

### UC12 – Saldo Insuficiente

**Objetivo:** Informar que não há saldo suficiente para concluir o saque.

**Ator Principal:** Sistema

**Pré-condições:**
- Saldo menor que o valor solicitado.

**Pós-condições:**
- Operação cancelada.

#### Fluxo Principal
1. Sistema exibe mensagem de saldo insuficiente.
2. Sistema cancela a operação.

---

### UC06 – Encerrar Sessão

**Objetivo:** Finalizar uma sessão autenticada.

**Ator Principal:** Cliente

**Pré-condições:**
- Cliente autenticado.

**Pós-condições:**
- Sessão encerrada.

#### Fluxo Principal
1. Cliente seleciona **Encerrar Sessão**.
2. Sistema invalida a sessão ativa.
3. Sistema confirma o encerramento.
