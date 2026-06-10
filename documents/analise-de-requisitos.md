# Especificação de Requisitos de Software (ERS)

## Requisitos Funcionais (RF)

### Cadastro e Gerenciamento de Clientes
    - **RF01**: O sistema deve permitir cadastrar clientes.
    - **RF02**: O sistema deve permitir consultar clientes cadastrados.
    - **RF03**: O sistema deve permitir atualizar os dados de clientes.
    - **RF04**: O sistema deve permitir desativar clientes.

### Cadastro e Gerenciamento do Acervo
    - **RF05**: O sistema deve permitir cadastrar obras no acervo.
    - **RF06**: O sistema deve permitir consultar obras cadastradas.
    - **RF07**: O sistema deve permitir atualizar os dados de uma obra.
    - **RF08**: O sistema deve permitir remover obras do acervo.
    - **RF09**: O sistema deve permitir classificar obras por categoria, autor e editora.
    - **RF10**: O sistema deve registrar a disponibilidade de cada exemplar.

### Empréstimos
    - **RF11**: O sistema deve permitir registrar empréstimos de obras.
    - **RF12**: O sistema deve registrar a data de empréstimo e a data prevista para devolução.
    - **RF13**: O sistema deve impedir empréstimos de obras indisponíveis.
    - **RF14**: O sistema deve impedir empréstimos para clientes bloqueados.
    - **RF15**: O sistema deve permitir consultar empréstimos ativos.

### Devoluções
    - **RF16**: O sistema deve permitir registrar devoluções.
    - **RF17**: O sistema deve calcular automaticamente multas por atraso.
    - **RF18**: O sistema deve atualizar a disponibilidade da obra após a devolução.
    - **RF19**: O sistema deve registrar o histórico de empréstimos e devoluções.

### Reservas
    - **RF20**: O sistema deve permitir registrar reservas de obras.
    - **RF21**: O sistema deve permitir cancelar reservas.
    - **RF22**: O sistema deve controlar a fila de reservas de uma obra.
    - **RF23**: O sistema deve cancelar automaticamente a reserva quando o empréstimo for efetivado.

### Renovação
    - **RF24**: O sistema deve permitir renovar empréstimos.
    - **RF25**: O sistema deve verificar as regras de renovação antes de concluir a operação.

### Multas e Penalidades
    - **RF26**: O sistema deve calcular o valor total das multas pendentes de um cliente.
    - **RF27**: O sistema deve registrar pagamentos de multas.
    - **RF28**: O sistema deve bloquear clientes que possuam pendências conforme as regras de negócio.

### Consultas e Relatórios
    - **RF29**: O sistema deve permitir consultar a disponibilidade de obras.
    - **RF30**: O sistema deve permitir consultar empréstimos em andamento.
    - **RF31**: O sistema deve permitir consultar obras em atraso.
    - **RF32**: O sistema deve permitir emitir relatórios sobre acervo, empréstimos e clientes.

---

## Requisitos Não Funcionais (RNF)

### Usabilidade
    - **RNF01**: O sistema deve apresentar menus e opções de forma clara e organizada no terminal.
    - **RNF02**: O sistema deve exibir mensagens de erro e confirmação de forma compreensível ao usuário.
    - **RNF03**: O sistema deve solicitar confirmação antes de operações críticas, como exclusão de registros.

### Desempenho
    - **RNF04**: O sistema deve responder às operações de consulta em até 2 segundos em condições normais de uso.
    - **RNF05**: O sistema deve processar operações de cadastro, empréstimo e devolução sem atrasos perceptíveis ao usuário.

### Segurança
    - **RNF06**: O sistema deve exigir autenticação para acesso às funcionalidades administrativas.
    - **RNF07**: O sistema deve impedir acesso a funcionalidades sem as permissões adequadas.
    - **RNF08**: O sistema deve garantir a integridade dos dados armazenados.

### Confiabilidade
    - **RNF09**: O sistema deve manter a consistência dos dados após cada operação.
    - **RNF10**: O sistema deve registrar o histórico de empréstimos, devoluções e reservas.
    - **RNF11**: O sistema deve tratar entradas inválidas sem encerrar inesperadamente a execução.

### Persistência de Dados
    - **RNF12**: Os dados devem permanecer armazenados após o encerramento do sistema.
    - **RNF13**: O sistema deve permitir a recuperação dos dados por meio de backup.
    - **RNF14**: Alterações nos dados devem ser salvas de forma permanente.

### Manutenibilidade
    - **RNF15**: O código-fonte deve ser modularizado e documentado.
    - **RNF16**: O sistema deve permitir a inclusão de novas funcionalidades com baixo impacto sobre as existentes.

### Portabilidade
    - **RNF17**: O sistema deve executar em sistemas operacionais compatíveis com a linguagem utilizada no desenvolvimento.
    - **RNF18**: O sistema não deve depender de softwares proprietários específicos para sua execução.
