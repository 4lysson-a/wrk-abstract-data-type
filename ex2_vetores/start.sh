declare -l NAME="vet" || NAME="vet"
gcc -c $NAME.c -o $NAME.o 
gcc main.c $NAME.o -lm -o main
echo

clear || cls
./main

echo
rm $NAME.o
rm main
