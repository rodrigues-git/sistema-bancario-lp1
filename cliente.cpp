#include "header.h"
#include <iostream>

cliente::cliente(std::string nome, std::string cpf){
    this->nome = nome;
    this->cpf = cpf;
}

std::string cliente::getNome(){
    return nome;
}

std:: string cliente::getCpf(){
    return cpf;
}


