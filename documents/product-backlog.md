# Product Backlog — Sistema de Biblioteca

## Visão Geral

O sistema tem como objetivo apoiar as operações de uma biblioteca, permitindo o gerenciamento do acervo, dos clientes, dos empréstimos, das reservas e das multas.

O desenvolvimento será realizado de forma incremental por meio de sprints. A primeira sprint corresponde ao MVP (Minimum Viable Product), contendo apenas as funcionalidades essenciais para operação básica da biblioteca.

---

# Épico 01 — Gerenciamento de Clientes

## US01
Como bibliotecário,
quero cadastrar clientes,
para permitir que utilizem os serviços da biblioteca.

## US02
Como bibliotecário,
quero consultar clientes cadastrados,
para localizar suas informações.

## US03
Como bibliotecário,
quero atualizar os dados de clientes,
para manter os cadastros atualizados.

## US04
Como bibliotecário,
quero remover clientes,
para excluir registros inválidos ou inativos.

---

# Épico 02 — Gerenciamento do Acervo

## US05
Como bibliotecário,
quero cadastrar livros,
para disponibilizá-los para empréstimo.

## US06
Como bibliotecário,
quero consultar livros cadastrados,
para localizar obras no acervo.

## US07
Como bibliotecário,
quero atualizar os dados de um livro,
para corrigir informações cadastradas.

## US08
Como bibliotecário,
quero remover livros do acervo,
para excluir obras obsoletas, danificadas ou extraviadas.

## US09
Como usuário,
quero consultar a disponibilidade de um livro,
para saber se ele pode ser emprestado.

---

# Épico 03 — Empréstimos e Devoluções

## US10
Como bibliotecário,
quero registrar empréstimos,
para controlar quais livros estão com cada cliente.

## US11
Como bibliotecário,
quero registrar devoluções,
para liberar livros para novos empréstimos.

## US12
Como bibliotecário,
quero consultar empréstimos ativos,
para acompanhar livros que ainda não foram devolvidos.

## US13
Como bibliotecário,
quero consultar o histórico de empréstimos,
para acompanhar movimentações anteriores.

## US14
Como bibliotecário,
quero renovar empréstimos,
para estender o prazo de devolução quando permitido.

---

# Épico 04 — Regras de Circulação

## US15
Como bibliotecário,
quero impedir empréstimos de livros indisponíveis,
para evitar empréstimos duplicados.

## US16
Como bibliotecário,
quero registrar a data prevista de devolução,
para controlar os prazos dos empréstimos.

## US17
Como bibliotecário,
quero identificar empréstimos em atraso,
para aplicar as regras da biblioteca.

## US18
Como bibliotecário,
quero bloquear novos empréstimos para clientes em atraso,
para cumprir as regras de negócio.

---

# Épico 05 — Reservas

## US19
Como cliente,
quero reservar livros indisponíveis,
para ter prioridade quando eles forem devolvidos.

## US20
Como cliente,
quero cancelar minhas reservas,
para desistir da solicitação.

## US21
Como bibliotecário,
quero consultar reservas ativas,
para controlar a fila de espera.

## US22
Como sistema,
quero cancelar automaticamente uma reserva quando o empréstimo for realizado,
para evitar reservas inconsistentes.

---

# Épico 06 — Multas

## US23
Como bibliotecário,
quero calcular multas por atraso,
para aplicar penalidades previstas pela biblioteca.

## US24
Como bibliotecário,
quero consultar multas de um cliente,
para verificar pendências financeiras.

## US25
Como bibliotecário,
quero registrar pagamentos de multas,
para regularizar a situação dos clientes.

---

# Épico 07 — Administração e Segurança

## US26
Como bibliotecário,
quero realizar login no sistema,
para acessar funcionalidades administrativas.

## US27
Como bibliotecário,
quero emitir relatórios do acervo,
para apoiar a gestão da biblioteca.

## US28
Como bibliotecário,
quero emitir relatórios de empréstimos,
para acompanhar a utilização do sistema.

## US29
Como bibliotecário,
quero emitir relatórios de multas,
para acompanhar pendências financeiras.

---

# Planejamento das Sprints

## Sprint 1 — MVP

### Objetivo

Disponibilizar uma versão mínima funcional capaz de controlar livros e empréstimos.

### User Stories

- US01 — Cadastrar clientes
- US02 — Consultar clientes cadastrados
- US05 — Cadastrar livros
- US06 — Consultar livros cadastrados
- US10 — Registrar empréstimos
- US11 — Registrar devoluções

### Entrega

- Cadastro de clientes;
- Consulta de clientes;
- Cadastro de livros;
- Consulta de livros;
- Registro de empréstimos;
- Registro de devoluções.

### Resultado Esperado

Uma biblioteca funcional básica operando em terminal.

---

## Sprint 2 — Controle de Circulação

### Objetivo

Melhorar o controle dos empréstimos e implementar regras essenciais.

### User Stories

- US09 — Consultar disponibilidade de livros
- US12 — Consultar empréstimos ativos
- US13 — Consultar histórico de empréstimos
- US14 — Renovar empréstimos
- US15 — Impedir empréstimos de livros indisponíveis
- US16 — Registrar data prevista de devolução

### Resultado Esperado

Controle adequado do ciclo de empréstimos.

---

## Sprint 3 — Regras de Negócio

### Objetivo

Implementar controle de atrasos e multas.

### User Stories

- US17 — Identificar empréstimos em atraso
- US18 — Bloquear clientes em atraso
- US23 — Calcular multas
- US24 — Consultar multas
- US25 — Registrar pagamento de multas

### Resultado Esperado

Controle de inadimplência e aplicação das regras da biblioteca.

---

## Sprint 4 — Reservas

### Objetivo

Implementar gerenciamento de reservas.

### User Stories

- US19 — Reservar livros
- US20 — Cancelar reservas
- US21 — Consultar reservas
- US22 — Cancelar reserva automaticamente ao emprestar

### Resultado Esperado

Controle completo das reservas da biblioteca.

---

## Sprint 5 — Administração

### Objetivo

Finalizar funcionalidades administrativas e de manutenção.

### User Stories

- US03 — Atualizar clientes
- US04 — Remover clientes
- US07 — Atualizar livros
- US08 — Remover livros
- US26 — Realizar login

### Resultado Esperado

Sistema administrável e com controle de acesso.

---

## Sprint 6 — Relatórios

### Objetivo

Disponibilizar informações gerenciais.

### User Stories

- US27 — Emitir relatório do acervo
- US28 — Emitir relatório de empréstimos
- US29 — Emitir relatório de multas

### Resultado Esperado

Sistema completo com funcionalidades operacionais e gerenciais.
