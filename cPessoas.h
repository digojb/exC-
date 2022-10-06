#ifndef CPESSOAS_H
#define CPESSOAS_H

class cPessoas {
public:
    struct cadastro{
        
        char nome[20];
        int cpf;
        float altura, peso;
        char sexo[1];
        
    }cad[100];
    
    cPessoas();
    cPessoas(const cPessoas& orig);
    virtual ~cPessoas();
    void lerDados();
    float calcImc();
    int pesquisaSequencial(int cpf_localizar, int quant);
    void ordenacaoBolha(int quant);
    int pesquisaBinaria(int quant, int cpf);
    void imprimirPessoas(int quant);
private:

};

#endif /* CPESSOAS_H */

