#include <iostream>
#include <ctime>

using namespace std;

int main() {
    
    int n, i;
    double tempoTotL, tempoTotV, tMinL, tMinV, tMin;

    cout << "Quanti giri ha la gara?" << endl;
    cin >> n;
    double leclerc[n];
    double verstappen[n];

    tempoTotL = 0;
    tempoTotV = 0;
    tMin = 0;
    for (i = 0; i <= n - 1; i++) {
        leclerc[i] = (900 + rand() % 400) / 100;
        verstappen[i] = (900 + rand() % 400) / 100;
        tempoTotL = tempoTotL + leclerc[i];
        tempoTotV = tempoTotV + verstappen[i];
    }
    for (i = 0; i <= n - 1; i++) {
        if (i == 0) {
            tMinL = leclerc[i];
            tMinV = verstappen[i];
        }
        if (leclerc[i] < tMinV) {
            tMinV = verstappen[i];
            tMin = i + 1;
        }
        if (verstappen[i] < tMinL) {
            tMinL = leclerc[i];
            tMin = i + 1;
        }
    }
    if (tMinL < tMinV) {
        cout << "Il giro più veloce è stato fatto da Leclerc al " << tMin << " giro" << endl;
    } else {
        cout << "Il giro più veloce è stato fatto da Verstappen al " << tMin << " giro" << endl;
    }
    if (tempoTotL < tempoTotV) {
        cout << "La gara è stata vinta da Leclerc" << endl;
    } else {
        cout << "La gara è stata vinta da Verstappen" << endl;
    }
    return 0;
}
