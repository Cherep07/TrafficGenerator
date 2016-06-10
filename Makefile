APPNAME=tgr
default:
	@echo "List of targets:"
	@echo "	tgr 	-	build tgr targets"
	@echo "	clean 	-	clean all targets"

SOURCE=main.cpp main.hpp
CFLAGS=-Wall
		
$(APPNAME): ${SOURCE}
	$(CXX) ${CFLAGS} -o $@ $^  
		
clean:
	rm -rf *.o ${APPNAME}