
#include "Configurator.hpp"

class ConfiguratorTestSuite : public CxxTest::TestSuite 
{
public:
  void testAddition( void )
  {
	  TS_ASSERT( 1 + 1 > 1 );
	  TS_ASSERT_EQUALS( 1 + 1, 2 );
  }
  void testTrue(void)
  {
	  TS_ASSERT_EQUALS(5, Configurator::dummy_function());
  }
  void testFalse(void)
  {
	  TS_ASSERT_DIFFERS(4, Configurator::dummy_function());
  }
};
