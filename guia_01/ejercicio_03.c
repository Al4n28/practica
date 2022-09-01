#include <stdio.h>

#define BOOST_TEST_MODULE example
#include <../boost/include/test/included/unit_test.hpp>

BOOST_AUTO_TEST_SUITE( test_suite1 )

BOOST_AUTO_TEST_CASE( test_case1 )
{
  BOOST_TEST_WARN( sizeof(int) < 4U );
}

BOOST_AUTO_TEST_CASE( test_case2 )
{
  BOOST_TEST_REQUIRE( 1 == 2 );
  BOOST_FAIL( "Should never reach this line" );
}

BOOST_AUTO_TEST_SUITE_END()
BOOST_AUTO_TEST_SUITE( test_suite2 )

BOOST_AUTO_TEST_CASE( test_case3 )
{
  BOOST_TEST( true );
}

BOOST_AUTO_TEST_CASE( test_case4 )
{
  BOOST_TEST( false );
}

BOOST_AUTO_TEST_SUITE_END()

float Dolar_A_Euro(float Dolares){

    /* Forma Correcta de hacerlo //1 euro = 1.33250 dólares
    float Valor_Euro_Dolar = 1.33250;
    float Euros = Dolares / Valor_Euro_Dolar;
    return Euros
    */
   
    //Como yo lo haría:
    return Dolares/1.33250;
  
}

int main() {
  float r =Dolar_A_Euro(1.33250);
  printf("%.2f",r);
  return 0;

}