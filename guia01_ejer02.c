#include <stdio.h>
#include <math.h>

int Equality(float a, float b, float epsilon);
float Sol_Calcular_Sueldo_Neto(float Precio, float Descuento);
float Calcular_Sueldo_Neto(float Precio, float Descuento);

//#include </Users/psr/Desktop/paper7-GNN/practica//boost/test/included/unit_test.hpp>
//C:\Program Files\boost_1_80_0\boost_1_80_0

#define BOOST_TEST_MODULE example

#include  </mnt/c/Users/Alan/Desktop/PracticaGit/practica/boost/test/included/unit_test.hpp>


BOOST_AUTO_TEST_SUITE( test_suite1 )

BOOST_AUTO_TEST_CASE( test_case1 )
{
  //float i = 1000, j = 10;
  BOOST_TEST(Calcular_Sueldo_Neto(30,2500) == Sol_Calcular_Sueldo_Neto(30,2500));
}

BOOST_AUTO_TEST_CASE( test_case2 )
{
  //float i = 1000, j = 100;
  BOOST_TEST(Calcular_Sueldo_Neto(0,2500) == Sol_Calcular_Sueldo_Neto(0,2500));
}

BOOST_AUTO_TEST_SUITE_END()
BOOST_AUTO_TEST_SUITE( test_suite2 )

BOOST_AUTO_TEST_CASE( test_case3 )
{
  //float i = 1000, j = 0;
  BOOST_TEST(Calcular_Sueldo_Neto(2500,0) == Sol_Calcular_Sueldo_Neto(2500,0));
}

BOOST_AUTO_TEST_CASE( test_case4 )
{
  //float i = 1000, j = 200;
  BOOST_TEST(Equality(Calcular_Sueldo_Neto(30,1000.5f),Sol_Calcular_Sueldo_Neto(30,1000.5f),0.01f)==1);
}

BOOST_AUTO_TEST_CASE( test_case5 )
{
  //float i = 1000.5f, j = 50.5f;
  BOOST_TEST(Equality(Calcular_Sueldo_Neto(30.5f,1000.5f),Sol_Calcular_Sueldo_Neto(30.5f,1000.5f),0.01f)==1);
}

BOOST_AUTO_TEST_SUITE_END()

