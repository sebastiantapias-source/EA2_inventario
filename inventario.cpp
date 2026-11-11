#include <iostream>
using namespace std;

int main() {
    int cantidad_productos;
    cout << "=== CONTROL DE INVENTARIO TIENDA DE ABARROTES ===\n";
    cout << "Ingrese cantidad de productos a revisar: ";
    cin >> cantidad_productos;

    for (int i = 1; i <= cantidad_productos; i++) {
        int stock_inicial, vendido, stock_actual;
        cout << "\nProducto " << i << "\n";
        cout << "Stock inicial: ";
        cin >> stock_inicial;
        cout << "Cantidad vendida: ";
        cin >> vendido;

        if (vendido < 0) {
            cout << "→ Venta inválida, no se registra\n";
        } else {
            stock_actual = stock_inicial - vendido;
            if (stock_actual < 5) {
                cout << "→ Stock bajo (" << stock_actual << "): hay que reponer\n";
            } else {
                cout << "→ Stock suficiente (" << stock_actual << ")\n";
            }
        }
    }
    cout << "\n=== FIN DE LA REVISIÓN ===\n";
    return 0;
}
