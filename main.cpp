#include <iostream>
#include "Cliente.h"
#include "ContaBancaria.h"

int main() {
    // Criação de objetos Cliente
    Cliente cliente1("Ana", "111.111.111-11");
    Cliente cliente2("Bruno", "222.222.222-22");
    Cliente cliente3("Carla", "333.333.333-33");

    // Criação de objetos ContaBancaria
    ContaBancaria conta1(1001, cliente1, 1000.0);
    ContaBancaria conta2(1002, cliente2, 200.0);
    ContaBancaria conta3(1003, cliente3, 0.0);

    // Exibição do saldo inicial da conta 1
    std::cout << "Saldo atual da conta " << conta1.getNumero() << ": R$ " << conta1.getSaldo() << std::endl;

    // Transferência da conta 1 para a conta 2
    conta1.transferir(200.0, conta2);
    std::cout << "Transferido: R$ 200 da conta " << conta1.getNumero() << " para a conta " << conta2.getNumero() << std::endl;

    // Transferência da conta 1 para as contas 2 e 3
    conta1.transferir(300.0, conta2, conta3);
    std::cout << "Transferido: R$ 150 para cada conta (" << conta2.getNumero() << " e " << conta3.getNumero() << ") da conta " << conta1.getNumero() << std::endl;

    // Exibição das informações finais das contas
    std::cout << "\nTitular: " << conta1.getTitular().getNome() << ", CPF: " << conta1.getTitular().getCpf() << std::endl;
    std::cout << "Número da Conta: " << conta1.getNumero() << ", Saldo: R$ " << conta1.getSaldo() << std::endl;

    std::cout << "Titular: " << conta2.getTitular().getNome() << ", CPF: " << conta2.getTitular().getCpf() << std::endl;
    std::cout << "Número da Conta: " << conta2.getNumero() << ", Saldo: R$ " << conta2.getSaldo() << std::endl;

    std::cout << "Titular: " << conta3.getTitular().getNome() << ", CPF: " << conta3.getTitular().getCpf() << std::endl;
    std::cout << "Número da Conta: " << conta3.getNumero() << ", Saldo: R$ " << conta3.getSaldo() << std::endl;

    return 0;
}