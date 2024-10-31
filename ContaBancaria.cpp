#include "ContaBancaria.h"

ContaBancaria::ContaBancaria(int numero, Cliente titular, double saldo) : numero(numero), titular(titular), saldo(saldo) {}

// Implementação dos getters
int ContaBancaria::getNumero() const {
    return numero;
}

Cliente ContaBancaria::getTitular() const {
    return titular;
}

double ContaBancaria::getSaldo() const {
    return saldo;
}

// Implementação dos métodos de transferência
void ContaBancaria::transferir(double valor, ContaBancaria &contaDestino) {
    if (saldo >= valor) {
        saldo -= valor;
        contaDestino.saldo += valor;
    }
}

void ContaBancaria::transferir(double valor, ContaBancaria &contaDestino1, ContaBancaria &contaDestino2) {
    double valorPorConta = valor / 2;
    if (saldo >= valor) {
        saldo -= valor;
        contaDestino1.saldo += valorPorConta;
        contaDestino2.saldo += valorPorConta;
    }
}