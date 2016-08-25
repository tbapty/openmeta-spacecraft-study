# Makefile generated by OpenModelica

# Simulations use -O3 by default
CC=gcc
CXX=g++
LINK=g++ -shared -Xlinker --export-all-symbols
EXEEXT=.exe
DLLEXT=.dll
CFLAGS_BASED_ON_INIT_FILE=
DEBUG_FLAGS=
CFLAGS=$(CFLAGS_BASED_ON_INIT_FILE) $(DEBUG_FLAGS) ${SIM_OR_DYNLOAD_OPT_LEVEL} -falign-functions -msse2 -mfpmath=sse ${MODELICAUSERCFLAGS}   
CPPFLAGS= -I"C:/OpenModelica1.9.2Beta1//include/omc/c" -I. -DOPENMODELICA_XML_FROM_FILE_AT_RUNTIME
LDFLAGS=-L"C:/Work/SatExample/CyPhy_Model/results/wzlna4sn/CyPhy/TestBenches" -L"C:/OpenModelica1.9.2Beta1//lib/omc" -L"C:/OpenModelica1.9.2Beta1//lib" -Wl,--stack,0x2000000,-rpath,"C:/OpenModelica1.9.2Beta1//lib/omc" -Wl,-rpath,"C:/OpenModelica1.9.2Beta1//lib"   -lregex -lexpat -lgc -lpthread -fopenmp -loleaut32  -lSimulationRuntimeC -lgc -lexpat -lregex -static-libgcc -luuid -loleaut32 -lole32 -lws2_32 -llis -lumfpack -lamd -lsundials_kinsol -lsundials_nvecserial -lipopt -lcoinmumps -lpthread -lm -lgfortranbegin -lgfortran -lmingw32 -lgcc_eh -lmoldname -lmingwex -lmsvcrt -luser32 -lkernel32 -ladvapi32 -lshell32 -llapack-mingw -lcminpack -ltmglib-mingw -lblas-mingw -lf2c -lwsock32 -lstdc++ 
MAINFILE=DC_Spacecraft_4444.c
MAINOBJ=DC_Spacecraft_4444.o
CFILES=DC_Spacecraft_4444_functions.c DC_Spacecraft_4444_records.c \
DC_Spacecraft_4444_01exo.c DC_Spacecraft_4444_02nls.c DC_Spacecraft_4444_03lsy.c DC_Spacecraft_4444_04set.c DC_Spacecraft_4444_05evt.c DC_Spacecraft_4444_06inz.c DC_Spacecraft_4444_07dly.c \
DC_Spacecraft_4444_08bnd.c DC_Spacecraft_4444_09alg.c DC_Spacecraft_4444_10asr.c DC_Spacecraft_4444_11mix.c DC_Spacecraft_4444_12jac.c DC_Spacecraft_4444_13opt.c DC_Spacecraft_4444_14lnz.c
OFILES=$(CFILES:.c=.o)
GENERATEDFILES=$(MAINFILE) DC_Spacecraft_4444.makefile DC_Spacecraft_4444_literals.h DC_Spacecraft_4444_functions.h $(CFILES)

.PHONY: omc_main_target clean bundle

# This is to make sure that DC_Spacecraft_4444_*.c are always compiled.
.PHONY: $(CFILES)

omc_main_target: $(MAINOBJ) DC_Spacecraft_4444_functions.h DC_Spacecraft_4444_literals.h $(OFILES)
	$(CC) -I. -o DC_Spacecraft_4444$(EXEEXT) $(MAINOBJ) $(OFILES) $(CPPFLAGS) -L"C:/Work/SatExample/CyPhy_Model/results/wzlna4sn/CyPhy/TestBenches"   $(CFLAGS) $(LDFLAGS)
clean:
	@rm -f DC_Spacecraft_4444_records.o $(MAINOBJ)

bundle:
	@tar -cvf DC_Spacecraft_4444_Files.tar $(GENERATEDFILES)