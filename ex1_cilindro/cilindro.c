#include "./lib/tad.h"

struct cilindro
{
  float h;
  float r;
  float v;
};

// Função que define altura, raio e volume

Cilindro *def(float h, float r, float v)
{
  Cilindro *c = (Cilindro *)malloc(sizeof(Cilindro));
  if (c != NULL)
  {
    c->h = h;
    c->r = r;
    c->v = v;
  }
  return c;
}

//Funções para o cálculo de fato

float volume(Cilindro *ch, Cilindro *cr)
{
  float h = (ch->h);
  float r = (cr->r);
  return (PI * (r * r) * h);
}

float altura(Cilindro *cr, Cilindro *cv)
{
  float r = (cr->r);
  float v = (cv->v);
  return ((v) / (PI * (r * r)));
}

float raio(Cilindro *ch, Cilindro *cv)
{
  float h = (ch->h);
  float v = (cv->v);
  return (((sqrt(v)) / (PI * h)));
}

// Funções para definir as propriedades individualmente

Cilindro *def_h(float h)
{
  Cilindro *c_h = (Cilindro *)malloc(sizeof(Cilindro));
  if (c_h != NULL)
  {
    c_h->h = h;
  }
  return c_h;
}

Cilindro *def_r(float r)
{
  Cilindro *c_r = (Cilindro *)malloc(sizeof(Cilindro));
  if (c_r != NULL)
  {
    c_r->r = r;
  }
  return c_r;
}

Cilindro *def_v(float v)
{
  Cilindro *c_v = (Cilindro *)malloc(sizeof(Cilindro));
  if (c_v != NULL)
  {
    c_v->v = v;
  }
  return c_v;
}
