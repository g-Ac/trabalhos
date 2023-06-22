#include "aluno.h"
Aluno::Aluno()
{
    ra=-1;
    nome=" ";
}
Aluno::Aluno(int r,std::string n);
{
    ra=r;
    nome = n;

}
Aluno::obterNome()
{
    return nome;

}
int Aluno::obterRa()
{
    return ra
}