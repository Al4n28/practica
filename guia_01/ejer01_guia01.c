#include <stdio.h>

float Calcular_Precio_Descuento( float Precio, float Descuento);

#define BOOST_TEST_MODULE example
#include </Users/psr/Desktop/paper7-GNN/practica//boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_SUITE( test_suite1 )

BOOST_AUTO_TEST_CASE( test_case1 )
{
  float r =Calcular_Precio_Descuento(1000,10);
  BOOST_TEST(r == 900);
}

BOOST_AUTO_TEST_CASE( test_case2 )
{
  float r =Calcular_Precio_Descuento(1000,100);
  BOOST_TEST(r == 0);
}

BOOST_AUTO_TEST_SUITE_END()
BOOST_AUTO_TEST_SUITE( test_suite2 )

BOOST_AUTO_TEST_CASE( test_case3 )
{
  float r =Calcular_Precio_Descuento(1000,0);
  BOOST_TEST(r == 1000);
}

BOOST_AUTO_TEST_CASE( test_case4 )
{
  float r =Calcular_Precio_Descuento(1000,200);
  BOOST_TEST(r == -1000);
}

BOOST_AUTO_TEST_SUITE_END()

