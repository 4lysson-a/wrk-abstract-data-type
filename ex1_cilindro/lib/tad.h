#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

#define PI 3.14



typedef struct cilindro Cilindro;

Cilindro *def(float h, float r, float v);

Cilindro *def_h(float h);

Cilindro *def_r(float r);

Cilindro *def_v(float v);

float altura(Cilindro *cr, Cilindro *cv);

float raio(Cilindro *ch, Cilindro *cv);

float volume(Cilindro *ch, Cilindro *cr);
