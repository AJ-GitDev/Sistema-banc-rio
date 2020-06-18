#include <stdio.h>
#include <stdlib.h>

int main(){
    int cartao, operacao;
    int agencia, conta, valor;
    int senha;
    int codigo;
    int cpf;
    
    printf("Bem vindo ao AJbanking \n");
    
    printf("Insira a senha do seu cartão: \n");
    scanf("%i", &cartao);
    
    if(cartao == 1234){
        printf("Informe a o operação desejada \n");
        
        printf("Digite 1 para depositos \n");
        printf("Digite 2 para Saques \n");
        printf("Digite 3 para Pagamentos \n");
        printf("Digite 4 para saldos \n");
        printf("Digite 5 para Transferências \n");
        printf("Digite 6 para outros serviços \n");
        scanf("%i", &operacao);
        
        switch(operacao){
            case 1:
            printf(" Atenção,\n se você estiver depositando após o encerramento do expediente\n ou em um feriado, o dinheiro só contabilizará no proximo dia útil\n");
            printf("Agência: ");
            scanf("%i", &agencia);
            printf("Conta: ");
            scanf("%i", &conta);
            printf("Valor: ");
            scanf("%i", &valor);
            printf("Operação realizada com sucesso!");
            break;
            case 2:
            printf("Informe o valor a ser sacado: ");
            scanf("%i", &valor);
            printf("Digite sua senha: ");
            scanf("%i", &senha);
            
            if(senha == 4321){
                printf("Aguarde uns instantes e receba seu dinheiro no valor de %i ", valor);
            }
            else{
                printf("Senha inválida");
            }
            break;
            case 3:
                 printf("Digite o código de barras para realizar o pagamento: \n");
                 scanf("%i", &codigo);
                 printf(" Pagamento concluido\n aguarde o comprovante\n");
            break;
            case 4:
            printf("Seu saldo é de 1,99R$ por que o dolar ta em alta e a crise ta feia XD");
            break;
            case 5:
            printf("Conta: \n");
            scanf("%i", &conta);
            printf("CPF: \n");
            scanf("%i", &cpf);
            printf("Informe o valor: \n");
            scanf("%i", &valor);
            printf("Aguarde um pouco, dentro de meia hora o dinheiro cairá \n");
            break;
            case 6:
            printf("Devido a preguiça do desenvolvedor em breve essa opção estará disponivel");
            break;
            default:
            printf("Operação inexistente!");
            break;
        }
    }
    else{
        printf("Cartão inválido");
    }
    
    return 0;
}

