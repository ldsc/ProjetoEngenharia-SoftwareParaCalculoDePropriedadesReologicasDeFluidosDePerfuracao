#include <iostream>
#include "CSimuladorPerdaCargaCirculacaoFluidos.h"

/// funcao main,  cria simulador e executa a simulacao.
int main() {
    CSimuladorPerdaCargaCirculacaoFluidos simulador;
    while( simulador.ExecutarSimulacao() ){
    };
    return 0;
}
