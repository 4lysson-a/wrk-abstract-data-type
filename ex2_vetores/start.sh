gcc -c vet.c -o vet.o 
echo ""
gcc main.c vet.o -o main
echo ""

./main

echo ""

rm vet.o
rm main