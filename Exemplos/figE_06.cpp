// Fig. E.6: figE_06.cpp
// Utilizando o tratamento de sinal
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <csignal>
using std::raise;
using std::signal;

#include <cstdlib>
using std::exit;
using std::rand;
using std::srand;

#include <ctime>
using std::time;

void signalHandler( int );

int main()
{
   signal( SIGINT, signalHandler );
   srand( time( 0 ) );
   
   // cria e gera sa�da de n�meros aleat�rios
   for ( int i = 1; i <= 100; i++ )
   {
      int x = 1 + rand() % 50;
      
      if ( x == 25 )
         raise( SIGINT ); // levanta SIGINT quando x � 25
         
      cout << setw( 4 ) << i;

      if ( i % 10 == 0 )
         cout << endl; // gera sa�da de endl quando i � um m�ltiplo de 10
   } // fim do for

   return 0;
} // fim de main

// trata o sinal
void signalHandler( int signalValue )
{
   cout << "\nInterrupt signal (" << signalValue
        << ") received.\n"
        << "Do you wish to continue (1 = yes or 2 = no)? ";

   int response;  

   cin >> response;

   // verifica respostas inv�lidas
   while ( response != 1 && response != 2 )
   {
      cout << "(1 = yes or 2 = no)? ";
      cin >> response;
   }  // fim do while
   
   // determina se � hora de sair
   if ( response != 1 )
      exit( EXIT_SUCCESS );

   // chama signal e lhe passa SIGINT e o endere�o de signalHandler
   signal( SIGINT, signalHandler );                               
}  // fim da fun��o signalHandler


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
