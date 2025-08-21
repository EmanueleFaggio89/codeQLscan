# Nome dell'eseguibile da generare
TARGET = my_program

# Lista dei file sorgenti
SRCS = atoiExample.cpp bufferAllocation.cpp bufferExample.cpp copy_bytes.cpp \
       fileHandling.cpp fileReading.cpp getValueFromArray.cpp personStruct.cpp \
       string_length.cpp systemCommands.cpp vehicleExample.cpp

# Compilatore e flag di compilazione
CXX = g++
CXXFLAGS = -Wall -std=c++11

# File oggetto (object files)
OBJS = $(SRCS:.cpp=.o)

# Regola per compilare l'eseguibile finale
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

# Regola per compilare i file oggetto
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Pulizia dei file generati
clean:
	rm -f $(OBJS) $(TARGET)

# Regola predefinita: costruisce tutto
all: $(TARGET)
