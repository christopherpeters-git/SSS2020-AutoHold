@SET PATH=D:/Programme/ANSYS Inc/v201/SCADE/SCADE/../contrib/Msys64/mingw64/bin;%PATH%
@SET INCLUDE=D:/Programme/ANSYS Inc/v201/SCADE/SCADE/../contrib/Msys64/mingw64/include
@SET LIB=D:/Programme/ANSYS Inc/v201/SCADE/SCADE/../contrib/Msys64/mingw64/lib
@IF "-B"=="%1" SET ARG=%1
gcc -print-search-dirs
@"D:/Programme/ANSYS Inc/v201/SCADE/SCADE/../contrib/Msys64/mingw64/bin/mingw32-make.exe" -j 4 -f Makefile_win64 %ARG%
