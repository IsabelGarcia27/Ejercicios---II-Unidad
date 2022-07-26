#include <iostream>

using namespace std;

double subtotal;
string listaProductos;

void agregarProducto (string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + " ";
    subtotal = subtotal + (cantidad * precio);
}
