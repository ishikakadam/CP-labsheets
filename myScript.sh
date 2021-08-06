rm *.o
rm exe
gcc -c book_fun.c
gcc -c book_catalog.c
gcc -c main_library.c
gcc -o search_exe books_catalog.o book_fun.o main_library.o
./search_exe