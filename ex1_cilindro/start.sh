declare -l NAME="cilindro"

gcc -c $NAME.c -o $NAME.o 
echo ""
gcc main.c $NAME.o -lm -o main
echo ""

./main

echo ""
rm $NAME.o
rm main