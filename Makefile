APPNAME=tgr
UTAPPNAME=ut

default:
	@echo "List of targets:"
	@echo "	tgr 	-	build tgr targets"
	@echo "	exec 	-	execute tgr targets"	
	@echo " ut 		-	execute unit tests"
	@echo "	clean 	-	clean all targets"

SOURCES=main.cpp main.hpp
CFLAGS=-Wall
		
$(APPNAME): ${SOURCES}
	$(CXX) ${CFLAGS} -o $@ $^  
		
exec:
	./$(APPNAME)

build_ut: UT/ut_main.hpp
	@echo "Translating test" 
	cd cxxtest ; bin/cxxtestgen --error-printer -o test.cpp ../UT/ut_main.hpp 
	@echo "Compiling test" 
	${CXX} -o ${UTAPPNAME} cxxtest/test.cpp 
	
exec_ut:
	./${UTAPPNAME}

ut: build_ut exec_ut
	
	
clean:
	rm -rf *.o ${APPNAME}