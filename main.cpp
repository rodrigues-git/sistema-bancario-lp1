#include "header.h"
#include <iostream>

int main(){

     std::cout << "\n";
    
   // Criação dos clientes
    cliente cliente1("Ana", "111.111.111-11");
    cliente cliente2("Bruno", "222.222.222-22");
    cliente cliente3("Carla", "333.333.333-33");

    // Criação das contas bancárias com saldos iniciais
    contabancaria conta1(1001, cliente1, 1000.0); // criação de objeto do tipo contabancaria com saldo igual à 1.000,00
    contabancaria conta2(1002, cliente2); // criação de objeto do tipo contabancaria com saldo igual à 0
    contabancaria conta3(1003, cliente3); // criação de objeto do tipo contabancaria com saldo igual à 0

    // Exibe o saldo inicial da conta de Ana
    conta1.showSaldo();

    std::cout << "\n";

    // Ana deposita 2.000,00 na conta
    conta1.depositar(2000.00);

    // Ana saca 500,00 da conta
    conta1.sacar(500.00);

    std::cout << "\n";

    // Exibição do saldo da conta de Ana após saque e depósito
    conta1.showSaldo();

    // Ana transfere R$200 para Bruno
    conta1.transferir(200.0, conta2);

    // Ana transfere R$300 divididos entre Bruno e Carla
    conta1.transferir(300.0, conta2, conta3);

    // Exibição dos saldos finais
    std::cout << "\n";
    conta1.getInfo();
    conta2.getInfo();
    conta3.getInfo();

    std::cout << "\n";

    system("Pause");

    return 0;
}

    
