#include "Cliente.h"

Cliente::Cliente(std::string nome, std::string cpf) : nome(nome), cpf(cpf) {}

// Implementação dos getters
std::string Cliente::getNome() const {
    return nome;
}

std::string Cliente::getCpf() const {
    return cpf;
}