# Nome do executável
TARGET = main

# Compilador
CXX = g++

# Flags do compilador
CXXFLAGS = -Wall -std=c++11

# Arquivos de cabeçalho e de implementação
SRCS = main.cpp Cliente.cpp ContaBancaria.cpp
HEADERS = Cliente.h ContaBancaria.h

# Obtenção dos arquivos objeto
OBJS = $(SRCS:.cpp=.o)

# Regra padrão
all: $(TARGET)

# Regra para compilar o executável
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Regra para compilar os arquivos objeto
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpeza dos arquivos objeto e do executável
clean:
	rm -f $(OBJS) $(TARGET)

# Fim do Makefile
