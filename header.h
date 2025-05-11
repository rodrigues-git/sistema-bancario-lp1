#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class cliente{
    private:
       std::string nome;
       std::string cpf;
    
    public:
        cliente(std::string nome, std::string cpf);
        std::string getNome();
        std::string getCpf();
};



class contabancaria{
    private:
        int num;
        cliente titular;
        double saldo;

    public:
        contabancaria(int num, cliente titular, double saldo);
        contabancaria(int num, cliente titular);
        void depositar(double valor);
        void sacar(double valor);
        void setSaldo(double valor);
        void transferir(double valor, contabancaria &destino);
        void transferir(double valor, contabancaria &destino1, contabancaria &destino2);
        int getNum();
        double getSaldo();
        void showSaldo();
        void getInfo();
};


#endif


