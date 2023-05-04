all:
	g++ -c area.cpp area_functions.cpp 
	g++ -o areas area.o area_functions.o
	.\areas.exe