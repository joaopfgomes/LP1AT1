#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

#include "Cliente.h"

class ContaBancaria {
private:
    int numero;
    Cliente titular;
    double saldo;

public:
    ContaBancaria(int numero, Cliente titular, double saldo);

    // Getters
    int getNumero() const;
    Cliente getTitular() const;
    double getSaldo() const;

    // Outros métodos, como transferir, etc.
    void transferir(double valor, ContaBancaria &contaDestino);
    void transferir(double valor, ContaBancaria &contaDestino1, ContaBancaria &contaDestino2);
};

#endif // CONTABANCARIA_H