# Variabili del compilatore
CXX = g++
CXXFLAGS = -Wall -std=c++11 -g  # -g per il debug, rimuovibile per la produzione

# Lista dei file sorgente
SRCS = \
    atoiExample.cpp \
    bufferAllocation.cpp \
    bufferExample.cpp \
    copy_bytes.cpp \
    fileHandling.cpp \
    fileReading.cpp \
    getValueFromArray.cpp \
    personStruct.cpp \
    string_length.cpp \
    systemCommands.cpp \
    vehicleExample.cpp

# Lista dei file oggetto (con estensione .o)
OBJS = $(SRCS:.cpp=.o)

# Eseguibili finali (uno per ogni file .cpp)
EXECS = $(SRCS:.cpp=)

# Obiettivo di default: compilare tutti gli eseguibili
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
