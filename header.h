#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class cliente{
    private:
       std::string nome;
       std::string cpf;
    
    public:
        cliente(std::string nome, std::string cpf); // construtor
        std::string getNome();
        std::string getCpf();
};



class contabancaria{
    private:
        int num;
        cliente titular;
        double saldo;

    public:
        contabancaria(int num, cliente titular, double saldo); //construtor para saldo informado
        contabancaria(int num, cliente titular); // construtor para saldo padrão zero
        void depositar(double valor); 
        void sacar(double valor); 
        void setSaldo(double valor); 
        void transferir(double valor, contabancaria &destino); 
        void transferir(double valor, contabancaria &destino1, contabancaria &destino2); 
        int getNum(); 
        double getSaldo(); // método para retornar o saldo, do tipo double
        void showSaldo(); //método para exibir saldo da conta, do tipo void, exibie uma mensagem no terminal
        void getInfo();
};


#endif


