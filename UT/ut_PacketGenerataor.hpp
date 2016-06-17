
#include "PacketGenerator.hpp"

class PacketGeneratorTestSuite : public CxxTest::TestSuite 
{
	public:
		void testSimpleTestTrafficGeneratorZeroPacketNumber( void )
		{
			char buffer[100]; 
  			SimpleTestTrafficGenerator(0, buffer);
		  	TS_ASSERT_EQUALS(buffer[0], 0);
  		}		
		void testSimpleTestTrafficGeneratorValuedPacketNumber( void )
		{
			char buffer[100]; 
  			SimpleTestTrafficGenerator(777, buffer);
		  	TS_ASSERT_EQUALS(*(int*)buffer, 777);
  		}
};

