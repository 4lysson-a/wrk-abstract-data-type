clear || cls

declare -l NAME="cilindro" || NAME="cilindro"

gcc -c $NAME.c -o $NAME.o 
gcc main.c $NAME.o -lm -o main
echo

./main
echo
rm $NAME.o
rm main
