#include <cxxtest/TestSuite.h>
#include "main.hpp"

class MyTestSuite : public CxxTest::TestSuite 
{
public:
  void testAddition( void )
  {
	  TS_ASSERT( 1 + 1 > 1 );
	  TS_ASSERT_EQUALS( 1 + 1, 2 );
  }
  void testTrue(void)
  {
	  TS_ASSERT_EQUALS(5, dummy_function());
  }
  void testFalse(void)
  {
	  TS_ASSERT_EQUALS(4, dummy_function());
  }
};