#FLAGS = -I ./inc -I ./../inc_ext  -I ./../main/inc -I ./../protocolstack/inc
FLAGS = -I ./inc -I ./../inc_ext  
CC=g++
#CPPFLAGS = -g  -I ./inc -I ./../inc_ext  -I ./../main/inc -I ./../protocolstack/inc  -MD
CPPFLAGS = -g  -I ./inc -I ./../inc_ext    -MD
AR = ar
LDFLAGS=-L
export AR CC CPPFAGS

OBJS = main.o l1.o root.o TestThread.o TestThreadB.o glo_event.o taskdef.o hardware.o
#OBJS1 = ../fsm/fsm.o ../fsm/protocoltask.o  
#OBJS2 = ../protocolstack/protocol_init.o ../protocolstack/cuser.o ../protocolstack/sm.o ../protocolstack/L3.o  
LIBS0= ../npp/npp.lib
LIBS1= ../fsm/fsm.lib
LIBS2 =../protocolstack/protocolstack.lib
LIBDIRS0=../npp/
LIBDIRS1=../fsm/
LIBDIRS2=../protocolstack/

#add by gabriel
vpath %.cpp  ./src
vpath %.h    ./inc -I ./../inc_ext  
#end 

mcu.out: $(OBJS) $(LIBDIRS0) $(LIBDIRS1) $(LIBDIRS2)
	g++   -o$@ $(OBJS) $(LIBS0) $(LIBS2) $(LIBS1) -lpthread
	#g++ -o$@ $(OBJS) $(LIBS0) -lpthread

.PHONY : $(LIBDIRS0) $(LIBDIRS1) $(LIBDIRS2) clean distclean

$(LIBDIRS0):
	$(MAKE) -C $@
$(LIBDIRS1):
	$(MAKE) -C $@
$(LIBDIRS2):
	$(MAKE) -C $@

clean:
	@rm -f *.o
	@rm -f *.d
	$(MAKE) -C $(LIBDIRS0) clean
	$(MAKE) -C $(LIBDIRS1) clean
	$(MAKE) -C $(LIBDIRS2) clean

distclean: clean
	@rm -f mcu.out





          

