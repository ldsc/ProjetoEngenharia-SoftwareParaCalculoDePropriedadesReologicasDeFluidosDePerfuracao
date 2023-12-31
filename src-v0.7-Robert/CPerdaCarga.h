#ifndef CPerdaCarga_h
#define CPerdaCarga_h

#include <iostream>

#include "CPropriedadesReologicas.h"
#include "CPoco.h"

/**
@brief Classe que calcula a perda de carga do fluido de perfura��o no po�o para fluidos Binghamianos
@class CPerdaCarga
@file CPerdaCarga.h
*/

class CPerdaCarga { /// Herdeira das classes CPropriedadesReologicas e CPoco
/// Atributos
public:
    /// Perda de Carga para Fluidos Binghamianos, com fluxo laminar, no interior de tubos e unidades no Sistema Internacional
    double perda_carga_Binghamiano_fl_it_SI;
    /// Perda de Carga para Fluidos Binghamianos, com fluxo laminar, no interior de tubos e unidades de Campo
    double perda_carga_Binghamiano_fl_it_UC;
    /// Perda de Carga para Fluidos Binghamianos, com fluxo laminar, no espa�o anular e unidades no Sistema Internacional
    double perda_carga_Binghamiano_fl_ea_SI;
    /// Perda de Carga para Fluidos Binghamianos, com fluxo laminar, no espa�o anular e unidades de Campo
    double perda_carga_Binghamiano_fl_ea_UC;
    /// Perda de Carga para Fluidos Binghamianos, com fluxo turbulento, no interior de tubos e unidades no Sistema Internacional
    double perda_carga_Binghamiano_ft_it_SI;
    /// Perda de Carga para Fluidos Binghamianos, com fluxo turbulento, no interior de tubos e unidades de Campo
    double perda_carga_Binghamiano_ft_it_UC;
    /// Perda de Carga para Fluidos Binghamianos, com fluxo turbulento, no interior de tubos e unidades no Sistema Internacional
    double perda_carga_Binghamiano_ft_ea_SI;
    /// Perda de Carga para Fluidos Binghamianos, com fluxo turbulento, no interior de tubos e unidades de Campo
    double perda_carga_Binghamiano_ft_ea_UC;
    /// Ponteiro para objeto da classe CPropriedadesReologicas
    CPropriedadesReologicas* ppropriedade;
    /// Ponteiro para objeto da classe CPoco
    CPoco* ppoco;

/// Metodos
public:
    /// Construtor
    CPerdaCarga(CPropriedadesReologicas* _ppropriedade, CPoco* _ppoco) : ppropriedade(_ppropriedade), ppoco(_ppoco){};
    /// Destrutor
    ~CPerdaCarga() {};

    /// Metodo para calculo da Perda de Carga para Fluidos Binghamianos, com fluxo laminar, no interior de tubos e unidades no Sistema Internacional
    double Perda_carga_Binghamiano_fl_it_SI();
    /// Metodo para calculo da Perda de Carga para Fluidos Binghamianos, com fluxo laminar, no interior de tubos e unidades de Campo
    double Perda_carga_Binghamiano_fl_it_UC();
    /// Metodo para o calculo da Perda de Carga para Fluidos Binghamianos, com fluxo laminar, no espa�o anular e unidades no Sistema Internacional
    double Perda_carga_Binghamiano_fl_ea_SI();
    /// Metodo para o calculo da Perda de Carga para Fluidos Binghamianos, com fluxo laminar, no espa�o anular e unidades de Campo
    double Perda_carga_Binghamiano_fl_ea_UC();
    /// Metodo para o calculo da Perda de Carga para Fluidos Binghamianos, com fluxo turbulento, no interior de tubos e unidades no Sistema Internacional
    double Perda_carga_Binghamiano_ft_it_SI();
    /// Metodo para o calculo da Perda de Carga para Fluidos Binghamianos, com fluxo turbulento, no interior de tubos e unidades de Campo
    double Perda_carga_Binghamiano_ft_it_UC();
    /// Metodo para o calculo da Perda de Carga para Fluidos Binghamianos, com fluxo turbulento, no interior de tubos e unidades no Sistema Internacional
    double Perda_carga_Binghamiano_ft_ea_SI();
    /// Metodo para o calculo da Perda de Carga para Fluidos Binghamianos, com fluxo turbulento, no interior de tubos e unidades de Campo
    double Perda_carga_Binghamiano_ft_ea_UC();

};

#endif // CPerdaCarga_h
