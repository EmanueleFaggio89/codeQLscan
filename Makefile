# Variabili del compilatore
CXX = g++
CXXFLAGS = -Wall -std=c++11 -g  # -g per il debug, può essere rimosso in produzione

# Lista dei file sorgente
SRCS = \
    copyBytes.cpp \
    stringLength.cpp \
    bufferExample.cpp \
    vehicleExample.cpp \
    atoiExample.cpp \
    getValueFromArray.cpp \
    fileReading.cpp \
    bufferAllocation.cpp \
    systemCommands.cpp \
    personStruct.cpp \
    fileHandling.cpp

# Lista dei file oggetto (con estensione .o)
OBJS = $(SRCS:.cpp=.o)

# Eseguibili finali (uno per ogni file .cpp)
EXECS = $(SRCS:.cpp=)

# Obiettivo di default: compilare gli eseguibili
all: $(EXECS)

# Regola per compilare ogni .cpp in un file oggetto .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regola per creare l'eseguibile a partire dai file oggetto
$(EXECS): %: %.o
	$(CXX) $(CXXFLAGS) $< -o $@

# Pulizia dei file generati (oggetti e eseguibili)
clean:
	rm -f $(OBJS) $(EXECS)

# Regola per una "ricompilazione completa"
rebuild: clean all

# Aiuto: mostra i target disponibili
help:
	@echo "Obiettivi disponibili:"
	@echo "  all      - Compila tutti gli eseguibili"
	@echo "  clean    - Rimuove i file oggetto e gli eseguibili"
	@echo "  rebuild  - Pulisce e ricompila tutto"
	@echo "  help     - Mostra questo messaggio"
