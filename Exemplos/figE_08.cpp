// Fig. E.8: figE_08.cpp
// Um exemplo de uma uni�o.
#include <iostream>
using std::cout;
using std::endl;

// define a union Number 
union Number             
{                        
   int integer1;         
   double double1;       
};  // fim da union Number

int main()
{
   Number value; // vari�vel de uni�o

   value.integer1 = 100; // atribui 100 ao membro integer1

   cout << "Put a value in the integer member\n"
        << "and print both members.\nint:   " 
        << value.integer1 << "\ndouble: " << value.double1
        << endl;

   value.double1 = 100.0;  // atribui 100.0 ao membro double1

   cout << "Put a value in the floating member\n" 
        << "and print both members.\nint:   " 
        << value.integer1 << "\ndouble: " << value.double1
        << endl;

   return 0;
}  // fim de main


/**************************************************************************
 * (C) Copyright 1992-2005 Deitel & Associates, Inc. e                    *
 * Pearson Education, Inc. Todos os direitos reservados                   *
 *                                                                        *
 * NOTA DE ISEN��O DE RESPONSABILIDADES: Os autores e o editor deste      *
 * livro empregaram seus melhores esfor�os na prepara��o do livro. Esses  *
 * esfor�os incluem o desenvolvimento, pesquisa e teste das teorias e     *
 * programas para determinar sua efic�cia. Os autores e o editor n�o      *
 * oferecem nenhum tipo de garantia, expl�cita ou implicitamente, com     *
 * refer�ncia a esses programas ou � documenta��o contida nesses livros.  *
 * Os autores e o editor n�o ser�o respons�veis por quaisquer danos,      *
 * acidentais ou conseq�entes, relacionados com ou provenientes do        *
 * fornecimento, desempenho ou utiliza��o desses programas.               *
 **************************************************************************/
