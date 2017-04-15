// Fig. E.4: figE_04.cpp
// Utilizando as fun��es exit e atexit
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <cstdlib>
using std::atexit;
using std::exit;

void print();

int main()
{
   atexit( print ); // registra fun��o print

   cout << "Enter 1 to terminate program with function exit" 
        << "\nEnter 2 to terminate program normally\n";

   int answer;
   cin >> answer;

   // encerra se a resposta for 1
   if ( answer == 1 )
   {
      cout << "\nTerminating program with function exit\n";
      exit( EXIT_SUCCESS );
   }  // fim do if

   cout << "\nTerminating program by reaching the end of main"
        << endl;

   return 0;
}  // fim de main

// exibe a mensagem antes da termina��o                      
void print()                                                 
{                                                            
   cout << "Executing function print at program termination\n"
        << "Program terminated" << endl;                     
}  // fim da fun��o print                                    


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
