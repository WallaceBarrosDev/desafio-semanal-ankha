# 📚 Desafio da Semana: Sistema de Biblioteca
Gerencie obras, clientes, empréstimos e reservas num sistema de terminal.

tudo ficara documentado em document/

## Cada obra (livro ou revista) deve ter
    Título, autor e código/ID
    Gênero/tipo e quantidade de cópias
    Status de disponibilidade

## Cada cliente deve ter
    Nome, matrícula e situação (regular ou bloqueado)

## 👤 Atores do sistema
    Bibliotecário — único usuário direto. Gerencia tudo.
    Cliente — cadastrado no sistema. Pode ter empréstimos e reservas ativas.

## 📌 Menu do bibliotecário
    [1] Emprestar obra a um cliente
    [2] Registrar devolução
    [3] Reservar obra indisponível
    [4] Cancelar reserva
    [5] Buscar obra por título, autor ou gênero
    [6] Ver empréstimos e reservas de um cliente
    [7] Cadastrar / remover obra ou cliente
    [0] Sair

## 📌 Regras de negócio
    Prazo máximo de empréstimo: 7 dias
    Multa de R$ 1,00 por dia de atraso na devolução
    Máximo de 3 obras emprestadas por cliente ao mesmo tempo
    Cliente com atraso não pode pegar nova obra
    Reserva é cancelada automaticamente ao fazer o empréstimo
    Obras podem ser removidas quando obsoletas ou danificadas

## ⭐ Bônus
    Histórico completo de todos os empréstimos realizados
    Alerta automático de clientes com devolução atrasada
    Salvar e carregar dados em arquivo .txt ou .json
    Relatório com a obra mais emprestada do sistema

## 💻 Vale qualquer linguagem
    Python, JS, Java, C, C++, C#, Go, Rust, PHP, Ruby, Kotlin, Swift...

## 🎓 Bônus de Engenharia de Software só pra quem é GOAT mesmo🐐 🔥
    ESW 01 — Análise do Problema: descreva o problema, stakeholders e objetivos antes de codificar
    ESW 02 — Regras de Negócio (RN): liste e numere todas as regras (ex: RN01, RN02...)
    ESW 03 — Especificação de Requisitos (ERS): separe Requisitos Funcionais (RF) e Não Funcionais (RNF)
    ESW 04 — Casos de Uso (ECU): documente com ator, pré-condição e fluxo principal (ex: UC01 — Emprestar Obra)
    ESW 05 — Protótipo de Telas: fluxo do sistema antes de implementar (papel, Figma, qualquer ferramenta)
