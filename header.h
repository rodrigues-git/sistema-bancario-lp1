#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class cliente{

     //declaração de atributos
    private:
       std::string nome;
       std::string cpf;

     //declaração de métodos 
    public:
        cliente(std::string nome, std::string cpf); // construtor
        std::string getNome();
        std::string getCpf();
};



class contabancaria{

    //declaração de atributos
    private:
        int num;
        cliente titular;
        double saldo;

     //declaração de métodos
    public:
        contabancaria(int num, cliente titular, double saldo); //construtor para saldo informado
        contabancaria(int num, cliente titular); // construtor para saldo padrão zero
        void depositar(double valor); // método para depósito na conta
        void sacar(double valor); //método para saque da conta
        void setSaldo(double valor); // método para definir o saldo da conta em operações de transferência onde a conta é o destino
        void transferir(double valor, contabancaria &destino); // método para transferência com 1 conta destino
        void transferir(double valor, contabancaria &destino1, contabancaria &destino2); // método para transferência com 2 contas destino
        int getNum(); // método para retornar o atributo número da conta
        double getSaldo(); // método para retornar o saldo, do tipo double
        void showSaldo(); //método para exibir saldo da conta, do tipo void, exibie uma mensagem no terminal
        void getInfo(); // método para exibir informações da conta e do titular
};


#endif


