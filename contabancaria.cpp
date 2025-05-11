#include "header.h"
#include <iostream>
#include <string>


contabancaria::contabancaria(int num, cliente titular, double saldo) : titular(titular){
    this->num = num;
    this->saldo = saldo;
}

contabancaria::contabancaria(int num, cliente titular) : titular(titular){
    this->num = num;
    saldo = 0.0;
}

void contabancaria::depositar(double valor){
    saldo += valor;
    std::cout << "Depositado R$ " << valor << " na conta " << num << std::endl; 
}

void contabancaria::sacar(double valor){

    if(saldo >= valor){
        saldo -= valor;
        std::cout << "Sacado R$ " << valor << " da conta " << num << std::endl; 
    }

    else{
        std::cout << "Saldo Insuficiente" << std::endl;
    }
}

void contabancaria::setSaldo(double valor){
    saldo = valor;
}

void contabancaria::transferir(double valor, contabancaria &destino){

     if(saldo >= valor){
        saldo -= valor;

        double saldo_destino = destino.getSaldo();
        destino.setSaldo(saldo_destino + valor);

        std::cout << "Transferido: R$ " << valor << " da conta " << num << " para a conta " << destino.getNum() << std::endl;
    }

    else{
        std::cout << "Saldo Insuficiente" << std::endl;
    }
}

void contabancaria::transferir(double valor, contabancaria &destino1, contabancaria &destino2){

     if(saldo >= valor){
        saldo -= valor;

        valor /= 2;

        double saldo_destino1 = destino1.getSaldo();
        destino1.setSaldo(saldo_destino1 + valor);

        double saldo_destino2 = destino2.getSaldo();
        destino2.setSaldo(saldo_destino2 + valor);

        std::cout << "Transferido: R$ " << valor << " para cada conta (" << destino1.getNum() << " e " << destino2.getNum() << ") da conta " << num << std::endl;  

    }

    else{
        std::cout << "Saldo Insuficiente" << std::endl;
    }

}

int contabancaria::getNum(){
    return num;
}

double contabancaria::getSaldo(){
    return saldo;
}

void contabancaria::showSaldo(){
    std::cout << "Saldo atual da conta " << num << ": R$ " << saldo << std::endl;
}

void contabancaria::getInfo(){
    std::cout << "Titular: " << titular.getNome() << ", CPF: " << titular.getCpf() << std::endl;
    std::cout << "Numero da Conta: " << num << ", Saldo: " << saldo << std::endl;
}



