# Especificação dos Casos de Uso

## UC01 – Realizar Login

### Objetivo UC01
Permitir que o bibliotecário acesse o sistema.

### Atores UC01
    - Bibliotecário

### Pré-condições UC01
    - O bibliotecário deve possuir credenciais cadastradas.

### Fluxo Principal UC01
    1. O bibliotecário informa usuário e senha.
    2. O sistema valida as credenciais.
    3. O sistema concede acesso ao menu principal.

### Fluxos Alternativos UC01
    **FA01:** Credenciais inválidas.
    1. O sistema informa que as credenciais são inválidas.
    2. O usuário pode tentar novamente.

### Pós-condições UC01
    - Usuário autenticado no sistema.

---

## UC02 – Cadastrar Cliente

### Objetivo UC02
Cadastrar um novo cliente na biblioteca.

### Atores UC02
    - Bibliotecário

### Pré-condições UC02
    - Bibliotecário autenticado.

### Fluxo Principal UC02
    1. O bibliotecário seleciona a opção de cadastro de cliente.
    2. O sistema solicita os dados do cliente.
    3. O bibliotecário informa os dados necessários.
    4. O sistema valida as informações.
    5. O sistema registra o cliente.

### Fluxos Alternativos UC02
    **FA01:** Cliente já cadastrado.
    1. O sistema identifica um cadastro existente.
    2. O sistema informa que o cliente já está cadastrado.

### Pós-condições UC02
    - Cliente cadastrado no sistema.

---

## UC03 – Consultar Cliente

### Objetivo UC03
Consultar os dados de um cliente cadastrado.

### Atores UC03
    - Bibliotecário

### Pré-condições UC03
    - Cliente cadastrado no sistema.

### Fluxo Principal UC03
    1. O bibliotecário informa um critério de busca.
    2. O sistema localiza o cliente.
    3. O sistema exibe os dados encontrados.

### Fluxos Alternativos UC03
    **FA01:** Cliente não encontrado.
    1. O sistema informa que não existem registros correspondentes.

### Pós-condições UC03
    - Dados do cliente exibidos.

---

## UC04 – Atualizar Cliente

### Objetivo UC04
Atualizar os dados de um cliente cadastrado.

### Atores UC04
    - Bibliotecário

### Pré-condições UC04
    - Cliente cadastrado no sistema.
    - Bibliotecário autenticado.

### Fluxo Principal UC04
    1. O bibliotecário consulta o cliente.
    2. O sistema exibe os dados atuais.
    3. O bibliotecário informa as alterações.
    4. O sistema valida as novas informações.
    5. O sistema atualiza o cadastro do cliente.

### Fluxos Alternativos UC04
    **FA01:** Dados inválidos.
    1. O sistema identifica inconsistências nos dados.
    2. O sistema solicita correção.

### Pós-condições UC04
    - Cadastro do cliente atualizado.

---

## UC05 – Cadastrar Obra

### Objetivo UC05
Cadastrar uma obra no acervo da biblioteca.

### Atores UC05
    - Bibliotecário

### Pré-condições UC05
    - Bibliotecário autenticado.

### Fluxo Principal UC05
    1. O bibliotecário seleciona a opção de cadastro de obra.
    2. O sistema solicita os dados da obra.
    3. O bibliotecário informa os dados necessários.
    4. O sistema valida as informações.
    5. O sistema registra a obra no acervo.

### Fluxos Alternativos UC05
    **FA01:** Obra já cadastrada.
    1. O sistema identifica um registro existente.
    2. O sistema informa que a obra já está cadastrada.

### Pós-condições UC05
    - Obra cadastrada no acervo.

---

## UC06 – Consultar Obra

### Objetivo UC06
Consultar uma obra cadastrada no acervo.

### Atores UC06
    - Bibliotecário
    - Cliente

### Pré-condições UC06
    - Existirem obras cadastradas no sistema.

### Fluxo Principal UC06
    1. O usuário informa um critério de busca.
    2. O sistema pesquisa as obras cadastradas.
    3. O sistema exibe os resultados encontrados.

### Fluxos Alternativos UC06
    **FA01:** Obra não encontrada.
    1. O sistema informa que não existem registros correspondentes.

### Pós-condições UC06
    - Obra consultada.

---

## UC07 – Atualizar Obra

### Objetivo UC07
Atualizar os dados de uma obra cadastrada.

### Atores UC07
    - Bibliotecário

### Pré-condições UC07
    - Obra cadastrada no sistema.
    - Bibliotecário autenticado.

### Fluxo Principal UC07
    1. O bibliotecário consulta a obra.
    2. O sistema exibe os dados atuais.
    3. O bibliotecário informa as alterações.
    4. O sistema valida as novas informações.
    5. O sistema atualiza os dados da obra.

### Fluxos Alternativos UC07
    **FA01:** Dados inválidos.
    1. O sistema identifica inconsistências.
    2. O sistema solicita correção.

### Pós-condições UC07
    - Dados da obra atualizados.

---

## UC08 – Remover Obra

### Objetivo UC08
Remover uma obra do acervo.

### Atores UC08
    - Bibliotecário

### Pré-condições UC08
    - Obra cadastrada no sistema.
    - Obra não vinculada a empréstimo ativo, salvo regra específica da biblioteca.

### Fluxo Principal UC08
    1. O bibliotecário seleciona a obra.
    2. O sistema exibe os dados da obra.
    3. O bibliotecário confirma a remoção.
    4. O sistema remove a obra do acervo.

### Fluxos Alternativos UC08
    **FA01:** Obra em empréstimo ativo.
    1. O sistema impede a remoção.
    2. O sistema informa o motivo.

### Pós-condições UC08
    - Obra removida do acervo.

---

## UC09 – Registrar Empréstimo

### Objetivo UC09
Registrar o empréstimo de uma obra para um cliente.

### Atores UC09
    - Bibliotecário

### Pré-condições UC09
    - Cliente cadastrado e ativo.
    - Obra disponível para empréstimo.
    - Cliente sem bloqueios ou pendências.

### Fluxo Principal UC09
    1. O bibliotecário informa o cliente.
    2. O sistema consulta os dados do cliente.
    3. O bibliotecário informa a obra desejada.
    4. O sistema consulta a disponibilidade da obra.
    5. O sistema valida as regras de negócio.
    6. O sistema registra o empréstimo.
    7. O sistema informa a data prevista de devolução.

### Fluxos Alternativos UC09
    **FA01:** Cliente bloqueado.
    1. O sistema identifica pendência ou atraso.
    2. O sistema impede o empréstimo.

    **FA02:** Obra indisponível.
    1. O sistema identifica indisponibilidade da obra.
    2. O sistema impede o empréstimo.

    **FA03:** Cliente com limite de empréstimos atingido.
    1. O sistema identifica excesso de empréstimos ativos.
    2. O sistema impede o empréstimo.

### Pós-condições UC09
    - Empréstimo registrado.
    - Obra marcada como emprestada.

---

## UC10 – Registrar Devolução

### Objetivo UC10
Registrar a devolução de uma obra emprestada.

### Atores UC10
    - Bibliotecário

### Pré-condições UC10
    - Existir empréstimo ativo para a obra.

### Fluxo Principal UC10
    1. O bibliotecário informa a obra devolvida.
    2. O sistema localiza o empréstimo correspondente.
    3. O sistema registra a devolução.
    4. O sistema calcula eventual multa por atraso.
    5. O sistema atualiza a disponibilidade da obra.

### Fluxos Alternativos UC10
    **FA01:** Empréstimo não encontrado.
    1. O sistema não encontra empréstimo ativo para a obra.
    2. O sistema informa a inconsistência ao usuário.

### Pós-condições UC10
    - Empréstimo encerrado.
    - Obra disponível para novos empréstimos, se não houver reserva ativa.

---

## UC11 – Renovar Empréstimo

### Objetivo UC11
Renovar um empréstimo existente.

### Atores UC11
    - Bibliotecário

### Pré-condições UC11
    - Existir empréstimo ativo.
    - Renovação permitida pelas regras de negócio.

### Fluxo Principal UC11
    1. O bibliotecário seleciona o empréstimo desejado.
    2. O sistema verifica as condições para renovação.
    3. O sistema atualiza a data prevista de devolução.

### Fluxos Alternativos UC11
    **FA01:** Renovação não permitida.
    1. O sistema identifica reserva ativa, atraso ou outra restrição.
    2. O sistema informa o motivo da rejeição.

### Pós-condições UC11
    - Empréstimo renovado.

---

## UC12 – Registrar Reserva

### Objetivo UC12
Registrar a reserva de uma obra para um cliente.

### Atores UC12
    - Cliente
    - Bibliotecário

### Pré-condições UC12
    - Cliente cadastrado.
    - Obra elegível para reserva.

### Fluxo Principal UC12
    1. O usuário solicita a reserva de uma obra.
    2. O sistema verifica a disponibilidade da obra.
    3. O sistema valida as regras de reserva.
    4. O sistema registra a reserva.
    5. O sistema informa o prazo da reserva.

### Fluxos Alternativos UC12
    **FA01:** Reserva não permitida.
    1. O sistema identifica impedimento para a reserva.
    2. O sistema informa o motivo.

### Pós-condições UC12
    - Reserva registrada.

---

## UC13 – Cancelar Reserva

### Objetivo UC13
Cancelar uma reserva existente.

### Atores UC13
    - Cliente
    - Bibliotecário

### Pré-condições UC13
    - Existir reserva ativa.

### Fluxo Principal UC13
    1. O usuário seleciona a reserva desejada.
    2. O sistema apresenta os dados da reserva.
    3. O usuário confirma o cancelamento.
    4. O sistema cancela a reserva.

### Fluxos Alternativos UC13
    **FA01:** Reserva não encontrada.
    1. O sistema informa que a reserva não existe.

### Pós-condições UC13
    - Reserva cancelada.

---

## UC14 – Consultar Disponibilidade

### Objetivo UC14
Consultar a disponibilidade de uma obra no acervo.

### Atores UC14
    - Cliente
    - Bibliotecário

### Pré-condições UC14
    - Obra cadastrada no sistema.

### Fluxo Principal UC14
    1. O usuário informa a obra desejada.
    2. O sistema localiza o registro da obra.
    3. O sistema exibe a situação de disponibilidade.

### Fluxos Alternativos UC14
    **FA01:** Obra não encontrada.
    1. O sistema informa que não existe registro correspondente.

### Pós-condições UC14
    - Situação de disponibilidade exibida.

---

## UC15 – Consultar Empréstimos

### Objetivo UC15
Consultar os empréstimos ativos ou históricos de um cliente.

### Atores UC15
    - Bibliotecário

### Pré-condições UC15
    - Cliente cadastrado no sistema.

### Fluxo Principal UC15
    1. O bibliotecário informa o cliente.
    2. O sistema localiza os empréstimos vinculados ao cliente.
    3. O sistema exibe os empréstimos encontrados.

### Fluxos Alternativos UC15
    **FA01:** Nenhum empréstimo encontrado.
    1. O sistema informa que o cliente não possui empréstimos registrados.

### Pós-condições UC15
    - Empréstimos consultados.

---

## UC16 – Consultar Multas

### Objetivo UC16
Consultar as multas pendentes de um cliente.

### Atores UC16
    - Cliente
    - Bibliotecário

### Pré-condições UC16
    - Cliente cadastrado no sistema.

### Fluxo Principal UC16
    1. O usuário informa o cliente.
    2. O sistema localiza as multas associadas.
    3. O sistema exibe os valores pendentes.

### Fluxos Alternativos UC16
    **FA01:** Não existem multas pendentes.
    1. O sistema informa que não há débitos em aberto.

### Pós-condições UC16
    - Multas consultadas.

---

## UC17 – Registrar Pagamento de Multa

### Objetivo UC17
Registrar o pagamento de uma multa pendente.

### Atores UC17
    - Bibliotecário

### Pré-condições UC17
    - Existir multa pendente.
    - Bibliotecário autenticado.

### Fluxo Principal UC17
    1. O bibliotecário consulta as multas do cliente.
    2. O sistema exibe os valores pendentes.
    3. O bibliotecário registra o pagamento.
    4. O sistema atualiza a situação financeira do cliente.

### Fluxos Alternativos UC17
    **FA01:** Multa não encontrada.
    1. O sistema informa que não existe multa pendente para o cliente.

### Pós-condições UC17
    - Multa quitada.
    - Cliente liberado, conforme regras de negócio.

---

## UC18 – Emitir Relatórios

### Objetivo UC18
Gerar relatórios administrativos do sistema.

### Atores UC18
    - Bibliotecário

### Pré-condições UC18
    - Bibliotecário autenticado.

### Fluxo Principal UC18
    1. O bibliotecário seleciona o tipo de relatório.
    2. O sistema coleta os dados necessários.
    3. O sistema gera o relatório.
    4. O sistema exibe o relatório ao usuário.

### Fluxos Alternativos UC18
    **FA01:** Não há dados para o relatório.
    1. O sistema informa que não existem dados suficientes para geração.

### Pós-condições UC18
    - Relatório emitido.
