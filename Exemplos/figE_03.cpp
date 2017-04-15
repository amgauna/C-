// Fig. E.3: figE_03.cpp
// Utilizando argumentos de linha de comando
#include <iostream>
using std::cout;
using std::endl;
using std::ios;

#include <fstream>
using std::ifstream;
using std::ofstream;

int main( int argc, char *argv[] )
{
   // verifica n�mero de argumentos de linha de comando
   if ( argc != 3 )
      cout << "Usage: copyFile infile_name outfile_name" << endl;
   else
   {
      ifstream inFile( argv[ 1 ], ios::in );

      // arquivo de entrada n�o p�de ser aberto
      if ( !inFile )
      {
         cout << argv[ 1 ] << " could not be opened" << endl;
         return -1;
      }  // fim do if

      ofstream outFile( argv[ 2 ], ios::out );

      // arquivo de sa�da n�o p�de ser aberto
      if ( !outFile )
      {
         cout << argv[ 2 ] << " could not be opened" << endl;
         inFile.close();
         return -2;
      } // fim do if

      char c = inFile.get(); // l� o primeiro caractere

      while ( inFile )
      {
         outFile.put( c );   // caractere de sa�da
         c = inFile.get();   // l� o pr�ximo caractere
      }  // fim do while
   }  // fim do else

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
