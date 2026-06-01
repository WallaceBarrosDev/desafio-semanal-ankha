# ⚡ Desafio da Semana: Sistema de Conta Bancária

## Fases do projeto

- [ ] Definir requisitos
- [ ] Definir task
- [ ] Implementação

Crie um programa que simule o funcionamento básico de uma conta bancária.

## Cada conta deve possuir
    • Usuário
    • Senha
    • Saldo (em R$ ou €)

## 📌 Antes de acessar o sistema
    • O usuário deve informar usuário e senha
    • O sistema deve permitir apenas um número limitado de tentativas de login
    • Ao atingir o limite, o acesso deve ser bloqueado

## 📌 Após o login, exiba um menu com as opções
    • Consultar saldo
    • Depositar dinheiro
    • Sacar dinheiro
    • Encerrar sessão

## 📌 Regras do sistema
    • O saldo deve ser exibido em reais (R$)
    • Não é permitido sacar valores maiores que o saldo disponível
    • A conta nunca pode ficar negativa
    • Depósitos e saques devem atualizar o saldo corretamente

## 📌 Ao consultar o saldo, o programa deve mostrar
    • Nome do usuário
    • Saldo atual em R$

## ⭐ Bônus
    • Mostrar um histórico das operações realizadas
    • Exibir a quantidade total de depósitos e saques realizados
    • Em caso de bloqueio, definir um time para realizar entrada novamente
