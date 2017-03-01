#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"

int main() {

  screen s;
  
  color c; 
  c.red = 0;
  c.green = 255;
  c.blue = 255;
  
  struct matrix *edges;
  edges = new_matrix(4, 4);

  //print_matrix test
  printf("Print matrix test");
  print_matrix( edges );

  //ident test
  printf("Identity matrix test");
  struct matrix *identity;
  identity = new_matrix(4,4);
  ident(identity);
  print_matrix(identity);
  
  //scalar_mult test
  printf("Scalar multiplication test");
  scalar_mult(2, identity);
  print_matrix(identity);
  

  //matrix_mult test
  printf("Matrix multiplication test");
  int i, j;f
  for (i = 0; i < edges->rows; i++) {
    for (j = 0; j < edges->cols; j++) {
      edges->m[i][j] = i;
    }
  }
  print_matrix(edges);

  printf("Multiply by:");
  print_matrix(identity);

  printf("Result:");
  matrix_mult(identity, edges);
  print_matrix(edges);

  draw_lines(edges, s, c);
  display(s);
  
  free_matrix(edges);
  free_matrix(identity)

  
}  
