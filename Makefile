APPNAME=tgr

default:
	@echo "List of targets:"
	@echo "	tgr	-	build tgr targets"

$(OBJDIR)/%.o: %.cpp
	${CXX} ${CFLAGS} $^
#	$(CXX) -c -o $@ $< $(CCFLAGS)	
	
$(APPNAME): main.o
	@echo ${OBJS}
	$(CXX) $(LDFLAGS) -o $@ $^  
		
clean:
	rm -rf *.o ${APPNAME}