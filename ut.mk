
UTAPPNAME=utest



.PHONY: unittest.cpp
unittest.cpp: UT/ut_*.hpp
	@echo "Translating test" 
	cxxtest/bin/cxxtestgen --error-printer -o unittest.cpp $^  
	
build_ut: unittest.cpp
	@echo "Compiling test" 
	${CXX} -o ${UTAPPNAME} -DCXXTEST_RUNNING -Icxxtest -Isrc unittest.cpp src/*.cpp
		
exec_ut:
	./$(UTAPPNAME)

ut: build_ut exec_ut