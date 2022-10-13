#include <stdio.h>
#include <math.h>

int Equality(float a, float b, float epsilon);
float Sol_Calcular_Precio_Descuento(float Precio, float Descuento);
float Calcular_Precio_Descuento(float Precio, float Descuento);

//#include </Users/psr/Desktop/paper7-GNN/practica//boost/test/included/unit_test.hpp>
//C:\Program Files\boost_1_80_0\boost_1_80_0

#define BOOST_TEST_MODULE example

#include  </mnt/c/Users/Alan/Desktop/PracticaGit/practica/boost/test/included/unit_test.hpp>


BOOST_AUTO_TEST_SUITE( test_suite1 )

BOOST_AUTO_TEST_CASE( test_case1 )
{
  //float i = 1000, j = 10;
  BOOST_TEST(Calcular_Precio_Descuento(1000,10) == Sol_Calcular_Precio_Descuento(1000,10));
}

BOOST_AUTO_TEST_CASE( test_case2 )
{
  //float i = 1000, j = 100;
  BOOST_TEST(Calcular_Precio_Descuento(1000,100) == Sol_Calcular_Precio_Descuento(1000,100));
}

BOOST_AUTO_TEST_SUITE_END()
BOOST_AUTO_TEST_SUITE( test_suite2 )

BOOST_AUTO_TEST_CASE( test_case3 )
{
  //float i = 1000, j = 0;
  BOOST_TEST(Calcular_Precio_Descuento(1000,0) == Sol_Calcular_Precio_Descuento(1000,0));
}

BOOST_AUTO_TEST_CASE( test_case4 )
{
  //float i = 1000, j = 200;
  BOOST_TEST(Calcular_Precio_Descuento(1000,200) == Sol_Calcular_Precio_Descuento(1000,200));
}

BOOST_AUTO_TEST_CASE( test_case5 )
{
  //float i = 1000.5f, j = 50.5f;
  BOOST_TEST(Equality(Calcular_Precio_Descuento(1000.5f,50),Sol_Calcular_Precio_Descuento(1000.5f,50),0.01f)==1);
}

BOOST_AUTO_TEST_SUITE_END()

