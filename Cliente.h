#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
private:
    std::string nome;
    std::string cpf;

public:
    Cliente(std::string nome, std::string cpf);

    // Getters
    std::string getNome() const;
    std::string getCpf() const;
};

#endif // CLIENTE_H