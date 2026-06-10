# Regras de Negócio — Biblioteca

## 1. Empréstimo
    - **RN01**: O prazo máximo de empréstimo é de **7 dias corridos**.
    - **RN02**: A devolução em atraso gera multa de **R$ 1,00 por dia de atraso**.
    - **RN03**: Cliente com atraso em empréstimo anterior não pode realizar novo empréstimo.
    - **RN04**: Cliente com multas pendentes não pode realizar novo empréstimo.
    - **RN05**: A reserva do exemplar é cancelada automaticamente quando o empréstimo é efetivado.
    - **RN06**: Obras em estado obsoleto, danificado ou indisponível não podem ser emprestadas.
    - **RN07**: Obras em manutenção, restauração ou processamento técnico não podem ser emprestadas.
    - **RN08**: O empréstimo só pode ser realizado para clientes com cadastro ativo.
    - **RN09**: O sistema deve impedir o empréstimo de obras de consulta local, referência ou uso restrito.
    - **RN10**: O sistema deve limitar a quantidade de obras emprestadas simultaneamente por cliente a um valor definido pela biblioteca.

## 2. Reserva
    - **RN11**: O prazo máximo de reserva é de **3 dias corridos**.
    - **RN12**: A reserva deve ser cancelada automaticamente quando o prazo expirar.
    - **RN13**: Uma obra só pode ser reservada quando não houver exemplar disponível para empréstimo imediato.
    - **RN14**: O cliente pode possuir, no máximo, uma quantidade limite de reservas ativas definida pela biblioteca.
    - **RN15**: Cliente com pendência financeira ou atraso pode ter a reserva bloqueada, conforme a política da biblioteca.
    - **RN16**: Uma reserva deve ser cancelada automaticamente quando o cliente efetivar o empréstimo da obra reservada.
    - **RN17**: Uma obra reservada deve ser destinada ao primeiro cliente da fila de reservas.

## 3. Devolução
    - **RN18**: A devolução deve registrar a data e hora de entrega do exemplar.
    - **RN19**: Caso a devolução ocorra após o prazo, a multa deve ser calculada por dia corrido de atraso.
    - **RN20**: A devolução de uma obra danificada pelo cliente pode gerar cobrança adicional ou bloqueio, conforme avaliação da biblioteca.
    - **RN21**: Após a devolução, o exemplar deve retornar ao status de disponível, salvo se houver reserva pendente ou restrição de uso.

## 4. Renovação
    - **RN22**: O empréstimo pode ser renovado apenas se não houver reserva ativa para a obra.
    - **RN23**: O empréstimo pode ser renovado somente uma quantidade limitada de vezes, definida pela biblioteca.
    - **RN24**: Empréstimos em atraso não podem ser renovados.
    - **RN25**: A renovação deve reiniciar o prazo de empréstimo conforme a regra definida pela biblioteca.

## 5. Cadastro do cliente
    - **RN26**: Somente clientes com cadastro completo e ativo podem realizar empréstimos e reservas.
    - **RN27**: O cadastro do cliente deve conter identificação válida e dados de contato atualizados.
    - **RN28**: A biblioteca pode exigir vínculo institucional, matrícula ou comprovante de vínculo para liberar o uso do serviço.
    - **RN29**: O cliente pode ser bloqueado por inadimplência, atraso recorrente ou descumprimento das regras.

## 6. Acervo
    - **RN30**: Toda obra deve possuir identificação única no acervo.
    - **RN31**: O sistema deve registrar o estado físico da obra.
    - **RN32**: Obras podem ser removidas do acervo quando estiverem obsoletas, danificadas ou extraviadas.
    - **RN33**: A retirada definitiva de uma obra do acervo deve manter registro histórico.
    - **RN34**: Obras raras ou de valor histórico podem possuir regras de circulação específicas.

## 7. Penalidades e bloqueios
    - **RN35**: O cliente com multa em aberto pode ter o sistema bloqueado para novos empréstimos.
    - **RN36**: O sistema deve calcular automaticamente o valor total das multas devidas.
    - **RN37**: O pagamento da multa deve liberar o cliente para novas operações, após confirmação.
    - **RN38**: O cliente pode ser suspenso temporariamente em caso de reincidência de atraso ou dano ao acervo.
