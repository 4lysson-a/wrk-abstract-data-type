declare -l NAME="cilindro" || NAME="cilindro"

clear 

gcc -c $NAME.c -o $NAME.o 
gcc main.c $NAME.o -lm -o main

./main

echo
rm $NAME.o
rm main
