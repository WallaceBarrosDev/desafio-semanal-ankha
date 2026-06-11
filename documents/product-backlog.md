# Product Backlog — Sistema de Biblioteca

## Visão Geral

O sistema tem como objetivo apoiar as operações de uma biblioteca, permitindo o gerenciamento do acervo, dos clientes, dos empréstimos, das reservas e das multas.

O desenvolvimento será realizado de forma incremental por meio de sprints. A primeira sprint corresponde ao MVP (Minimum Viable Product), contendo apenas as funcionalidades essenciais para operação básica da biblioteca.

---

## Épico 01 — Gerenciamento de Clientes

### US01
Como bibliotecário,
quero cadastrar clientes,
para permitir que utilizem os serviços da biblioteca.

    **Critérios de aceitação:**
    - [ ] Cliente deve possuir nome e matrícula (RN39)
    - [ ] Nome não pode ser vazio ou nulo (RN40)
    - [ ] Matrícula gerada automaticamente pelo sistema (RN41)
    - [ ] Testes unitários cobrindo os critérios acima
    - [ ] Tela de cadastro funcional no terminal

### US02
Como bibliotecário,
quero consultar clientes cadastrados,
para localizar suas informações.

**Critérios de aceitação:**
- [ ] Busca por nome ou matrícula
- [ ] Exibir mensagem caso nenhum cliente seja encontrado
- [ ] Testes unitários cobrindo os critérios acima
- [ ] Tela de consulta funcional no terminal

### US03
Como bibliotecário,
quero atualizar os dados de clientes,
para manter os cadastros atualizados.

**Critérios de aceitação:**
- [ ] Somente campos editáveis pelo bibliotecário podem ser alterados (matrícula não pode ser editada)
- [ ] Nome atualizado não pode ser vazio ou nulo (RN40)
- [ ] Testes unitários cobrindo os critérios acima
- [ ] Tela de edição funcional no terminal

### US04
Como bibliotecário,
quero remover clientes,
para excluir registros inválidos ou inativos.

**Critérios de aceitação:**
- [ ] Não permitir remoção de cliente com empréstimo ativo
- [ ] Não permitir remoção de cliente com multa pendente
- [ ] Testes unitários cobrindo os critérios acima
- [ ] Confirmação de remoção na tela antes de executar

---

## Épico 02 — Gerenciamento do Acervo

### US05
Como bibliotecário,
quero cadastrar livros,
para disponibilizá-los para empréstimo.

**Critérios de aceitação:**
- [ ] Livro deve possuir identificação única no acervo (RN30)
- [ ] Estado físico deve ser registrado (RN31)
- [ ] Testes unitários cobrindo os critérios acima
- [ ] Tela de cadastro de livro funcional no terminal

### US06
Como bibliotecário,
quero consultar livros cadastrados,
para localizar obras no acervo.

**Critérios de aceitação:**
- [ ] Busca por título ou identificador
- [ ] Exibir mensagem caso nenhum livro seja encontrado
- [ ] Testes unitários cobrindo os critérios acima
- [ ] Tela de consulta funcional no terminal

### US07
Como bibliotecário,
quero atualizar os dados de um livro,
para corrigir informações cadastradas.

**Critérios de aceitação:**
- [ ] Identificador único do livro não pode ser alterado (RN30)
- [ ] Estado físico pode ser atualizado (RN31)
- [ ] Testes unitários cobrindo os critérios acima
- [ ] Tela de edição funcional no terminal

### US08
Como bibliotecário,
quero remover livros do acervo,
para excluir obras obsoletas, danificadas ou extraviadas.

**Critérios de aceitação:**
- [ ] Não permitir remoção de livro com empréstimo ativo
- [ ] Registro histórico deve ser mantido após remoção (RN33)
- [ ] Testes unitários cobrindo os critérios acima
- [ ] Confirmação de remoção na tela antes de executar

### US09
Como usuário,
quero consultar a disponibilidade de um livro,
para saber se ele pode ser emprestado.

**Critérios de aceitação:**
- [ ] Exibir status atual do livro (disponível, emprestado, em manutenção, etc.)
- [ ] Testes unitários cobrindo os critérios acima
- [ ] Tela de disponibilidade funcional no terminal

---

## Épico 03 — Empréstimos e Devoluções

### US10
Como bibliotecário,
quero registrar empréstimos,
para controlar quais livros estão com cada cliente.

**Critérios de aceitação:**
- [ ] Somente clientes com cadastro ativo podem realizar empréstimo (RN08, RN26)
- [ ] Obras indisponíveis não podem ser emprestadas (RN06, RN07)
- [ ] Prazo máximo de empréstimo é de 7 dias corridos (RN01)
- [ ] Testes unitários cobrindo os critérios acima
- [ ] Tela de registro de empréstimo funcional no terminal

### US11
Como bibliotecário,
quero registrar devoluções,
para liberar livros para novos empréstimos.

**Critérios de aceitação:**
- [ ] Data e hora de devolução devem ser registradas (RN18)
- [ ] Exemplar retorna ao status disponível após devolução (RN21)
- [ ] Multa calculada automaticamente em caso de atraso (RN19)
- [ ] Testes unitários cobrindo os critérios acima
- [ ] Tela de registro de devolução funcional no terminal

### US12
Como bibliotecário,
quero consultar empréstimos ativos,
para acompanhar livros que ainda não foram devolvidos.

**Critérios de aceitação:**
- [ ] Listar empréstimos com cliente, livro e prazo de devolução
- [ ] Destacar empréstimos em atraso
- [ ] Testes unitários cobrindo os critérios acima
- [ ] Tela de consulta funcional no terminal

### US13
Como bibliotecário,
quero consultar o histórico de empréstimos,
para acompanhar movimentações anteriores.

**Critérios de aceitação:**
- [ ] Exibir empréstimos finalizados com data de devolução
- [ ] Filtro por cliente ou livro
- [ ] Testes unitários cobrindo os critérios acima
- [ ] Tela de histórico funcional no terminal

### US14
Como bibliotecário,
quero renovar empréstimos,
para estender o prazo de devolução quando permitido.

**Critérios de aceitação:**
- [ ] Não permitir renovação se houver reserva ativa para o livro (RN22)
- [ ] Limite de renovações respeitado (RN23)
- [ ] Empréstimos em atraso não podem ser renovados (RN24)
- [ ] Prazo reinicia conforme regra da biblioteca (RN25)
- [ ] Testes unitários cobrindo os critérios acima
- [ ] Tela de renovação funcional no terminal

---

## Épico 04 — Regras de Circulação

### US15
Como bibliotecário,
quero impedir empréstimos de livros indisponíveis,
para evitar empréstimos duplicados.

**Critérios de aceitação:**
- [ ] Sistema bloqueia empréstimo de livro já emprestado
- [ ] Mensagem de erro clara exibida ao bibliotecário
- [ ] Testes unitários cobrindo os critérios acima

### US16
Como bibliotecário,
quero registrar a data prevista de devolução,
para controlar os prazos dos empréstimos.

**Critérios de aceitação:**
- [ ] Data prevista calculada automaticamente com base no prazo (RN01)
- [ ] Data exibida na tela de empréstimo
- [ ] Testes unitários cobrindo os critérios acima

### US17
Como bibliotecário,
quero identificar empréstimos em atraso,
para aplicar as regras da biblioteca.

**Critérios de aceitação:**
- [ ] Empréstimo marcado como atrasado automaticamente após o prazo
- [ ] Listagem de empréstimos em atraso disponível
- [ ] Testes unitários cobrindo os critérios acima

### US18
Como bibliotecário,
quero bloquear novos empréstimos para clientes em atraso,
para cumprir as regras de negócio.

**Critérios de aceitação:**
- [ ] Sistema bloqueia empréstimo para cliente com atraso (RN03)
- [ ] Sistema bloqueia empréstimo para cliente com multa pendente (RN04)
- [ ] Mensagem de erro clara exibida ao bibliotecário
- [ ] Testes unitários cobrindo os critérios acima

---

## Épico 05 — Reservas

### US19
Como cliente,
quero reservar livros indisponíveis,
para ter prioridade quando eles forem devolvidos.

**Critérios de aceitação:**
- [ ] Reserva permitida apenas para livros sem exemplar disponível (RN13)
- [ ] Prazo máximo de reserva de 3 dias corridos (RN11)
- [ ] Limite de reservas ativas por cliente respeitado (RN14)
- [ ] Testes unitários cobrindo os critérios acima
- [ ] Tela de reserva funcional no terminal

### US20
Como cliente,
quero cancelar minhas reservas,
para desistir da solicitação.

**Critérios de aceitação:**
- [ ] Cancelamento disponível para qualquer reserva ativa
- [ ] Testes unitários cobrindo os critérios acima
- [ ] Confirmação de cancelamento na tela antes de executar

### US21
Como bibliotecário,
quero consultar reservas ativas,
para controlar a fila de espera.

**Critérios de aceitação:**
- [ ] Listar reservas com cliente, livro e prazo de expiração
- [ ] Exibir posição na fila de espera
- [ ] Testes unitários cobrindo os critérios acima
- [ ] Tela de consulta funcional no terminal

### US22
Como sistema,
quero cancelar automaticamente uma reserva quando o empréstimo for realizado,
para evitar reservas inconsistentes.

**Critérios de aceitação:**
- [ ] Reserva cancelada automaticamente ao efetivar o empréstimo (RN05, RN16)
- [ ] Próximo cliente da fila notificado (RN17)
- [ ] Testes unitários cobrindo os critérios acima

---

## Épico 06 — Multas

### US23
Como bibliotecário,
quero calcular multas por atraso,
para aplicar penalidades previstas pela biblioteca.

**Critérios de aceitação:**
- [ ] Multa calculada automaticamente por dia corrido de atraso (RN02, RN19)
- [ ] Valor total de multas calculado pelo sistema (RN36)
- [ ] Testes unitários cobrindo os critérios acima

### US24
Como bibliotecário,
quero consultar multas de um cliente,
para verificar pendências financeiras.

**Critérios de aceitação:**
- [ ] Exibir multas pendentes e pagas por cliente
- [ ] Testes unitários cobrindo os critérios acima
- [ ] Tela de consulta funcional no terminal

### US25
Como bibliotecário,
quero registrar pagamentos de multas,
para regularizar a situação dos clientes.

**Critérios de aceitação:**
- [ ] Pagamento libera cliente para novas operações (RN37)
- [ ] Registro de pagamento com data e valor
- [ ] Testes unitários cobrindo os critérios acima
- [ ] Tela de pagamento funcional no terminal

---

## Épico 07 — Administração e Segurança

### US26
Como bibliotecário,
quero realizar login no sistema,
para acessar funcionalidades administrativas.

**Critérios de aceitação:**
- [ ] Autenticação por credenciais válidas
- [ ] Acesso bloqueado para credenciais inválidas
- [ ] Testes unitários cobrindo os critérios acima
- [ ] Tela de login funcional no terminal

### US27
Como bibliotecário,
quero emitir relatórios do acervo,
para apoiar a gestão da biblioteca.

**Critérios de aceitação:**
- [ ] Relatório exibe total de obras, estado físico e disponibilidade
- [ ] Tela de relatório funcional no terminal

### US28
Como bibliotecário,
quero emitir relatórios de empréstimos,
para acompanhar a utilização do sistema.

**Critérios de aceitação:**
- [ ] Relatório exibe empréstimos ativos, em atraso e finalizados
- [ ] Tela de relatório funcional no terminal

### US29
Como bibliotecário,
quero emitir relatórios de multas,
para acompanhar pendências financeiras.

**Critérios de aceitação:**
- [ ] Relatório exibe multas pendentes e valor total
- [ ] Tela de relatório funcional no terminal

---

## Planejamento das Sprints

### Sprint 1 — MVP
Objetivo: Disponibilizar uma versão mínima funcional capaz de controlar livros e empréstimos.

#### User Stories
    - [ ] US01 — Cadastrar clientes
    - [ ] US02 — Consultar clientes cadastrados
    - [ ] US05 — Cadastrar livros
    - [ ] US06 — Consultar livros cadastrados
    - [ ] US10 — Registrar empréstimos
    - [ ] US11 — Registrar devoluções

Resultado Esperado: Uma biblioteca funcional básica operando em terminal.

---

### Sprint 2 — Controle de Circulação

**Objetivo:** Melhorar o controle dos empréstimos e implementar regras essenciais.

**User Stories:**
- US09 — Consultar disponibilidade de livros
- US12 — Consultar empréstimos ativos
- US13 — Consultar histórico de empréstimos
- US14 — Renovar empréstimos
- US15 — Impedir empréstimos de livros indisponíveis
- US16 — Registrar data prevista de devolução

**Resultado Esperado:** Controle adequado do ciclo de empréstimos.

---

### Sprint 3 — Regras de Negócio

**Objetivo:** Implementar controle de atrasos e multas.

**User Stories:**
- US17 — Identificar empréstimos em atraso
- US18 — Bloquear clientes em atraso
- US23 — Calcular multas
- US24 — Consultar multas
- US25 — Registrar pagamento de multas

**Resultado Esperado:** Controle de inadimplência e aplicação das regras da biblioteca.

---

### Sprint 4 — Reservas

**Objetivo:** Implementar gerenciamento de reservas.

**User Stories:**
- US19 — Reservar livros
- US20 — Cancelar reservas
- US21 — Consultar reservas
- US22 — Cancelar reserva automaticamente ao emprestar

**Resultado Esperado:** Controle completo das reservas da biblioteca.

---

### Sprint 5 — Administração

**Objetivo:** Finalizar funcionalidades administrativas e de manutenção.

**User Stories:**
- US03 — Atualizar clientes
- US04 — Remover clientes
- US07 — Atualizar livros
- US08 — Remover livros
- US26 — Realizar login

**Resultado Esperado:** Sistema administrável e com controle de acesso.

---

### Sprint 6 — Relatórios

**Objetivo:** Disponibilizar informações gerenciais.

**User Stories:**
- US27 — Emitir relatório do acervo
- US28 — Emitir relatório de empréstimos
- US29 — Emitir relatório de multas

**Resultado Esperado:** Sistema completo com funcionalidades operacionais e gerenciais.
