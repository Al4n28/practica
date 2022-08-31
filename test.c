//#define BOOST_TEST_MODULE //header-only multiunit test
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Suites
#include <boost/test/included/unit_test.hpp>
int substract(int i, int j ){
  return i-j;
}
BOOST_AUTO_TEST_SUITE(Maths)
BOOST_AUTO_TEST_CASE(subtractTest){
  BOOST_CHECK(substract(3,3)==0)
}

BOOST_AUTO_TEST_SUITE_END()
/*BOOST_AUTO_TEST_CASE( test1 )
{
    int i = 1;
    BOOST_CHECK( i*i == 1 );
}*/