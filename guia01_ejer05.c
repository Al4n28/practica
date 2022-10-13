#include <stdio.h>
#include <math.h>

int Equality(float a, float b, float epsilon);
float Calcular_Perimetro(float radio);
float Calcular_Area(float radio);
float Calcular_Volumen(float radio);
int Mostrar_Operaciones_Radio(float radio);
float Sol_Calcular_Perimetro(float radio);
float Sol_Calcular_Area(float radio);
float Sol_Calcular_Volumen(float radio);
int Sol_Mostrar_Operaciones_Radio(float radio);

//#include </Users/psr/Desktop/paper7-GNN/practica//boost/test/included/unit_test.hpp>
//C:\Program Files\boost_1_80_0\boost_1_80_0

#define BOOST_TEST_MODULE example

#include  </mnt/c/Users/Alan/Desktop/PracticaGit/practica/boost/test/included/unit_test.hpp>


BOOST_AUTO_TEST_SUITE( test_suite1 )

BOOST_AUTO_TEST_CASE( test_case1 )
{
  //float i = 1000, j = 10;
  BOOST_TEST(Calcular_Perimetro(3.3f) == Sol_Calcular_Perimetro(3.3f));
}

BOOST_AUTO_TEST_CASE( test_case2 )
{
  //float i = 1000, j = 100;
  BOOST_TEST(Calcular_Area(5.5f) == Sol_Calcular_Area(5.5f));
}

BOOST_AUTO_TEST_SUITE_END()
BOOST_AUTO_TEST_SUITE( test_suite2 )

BOOST_AUTO_TEST_CASE( test_case3 )
{
  //float i = 1000, j = 0;
  BOOST_TEST(Calcular_Volumen(7.7f) == Sol_Calcular_Volumen(7.7f));
}

BOOST_AUTO_TEST_CASE( test_case4 )
{
  //float i = 1000, j = 200;
  BOOST_TEST(Mostrar_Operaciones_Radio(1.1f)==0);
}

/*BOOST_AUTO_TEST_CASE( test_case5 )
{
  //float i = 1000.5f, j = 50.5f;
  // compare strings in printfs
}*/

BOOST_AUTO_TEST_SUITE_END()

