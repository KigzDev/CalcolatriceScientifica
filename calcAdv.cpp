// Includo le direttive

#include <iostream>
#include <cmath>

using namespace std;

// Funzione principale(main) 

int main() {

    // Dichiarazione variabili utili al programma

    int num1;
    int num2;

    int result;
    int opz;

    double num;
    double resultf;

    char running = 'y';

    // Ciclo esecuzione

    while(running == 'y') {

        // Menù principale

        cout << "\n--Opzioni disponibili--\n";

        cout << "\n1: Addizione";
        cout << "\n2: Sottrazione";
        cout << "\n3: Moltiplicazione";
        cout << "\n4: Divisione";
        cout << "\n5: Modulo";
        cout << "\n6: Radice Quadrata";
        cout << "\n7: Radice Cubica";
        cout << "\n8: Arrotondamento per eccesso";
        cout << "\n9: Arrotondamento per difetto";
        cout << "\n10: Arrotondamento a numero vicino";
        cout << "\n11: Valore assoluto";
        cout << "\n12: Potenza";
        cout << "\n13: Seno angolo";
        cout << "\n14: Coseno angolo";
        cout << "\n15: Tangente angolo\n";

        // Inserimento opzione

        cout << "\nInserisci opzione(1/15): ";
        cin >> opz;

        // Switch opzione inserita

        switch(opz) {

            // Caso addizione

            case 1:

                // Inserimento primo numero

                cout << "\nInserisci il primo numero: ";
                cin >> num1;

                // Inserimento secondo numero

                cout << "\nInserisci il secondo numero: ";
                cin >> num2;

                // Risultato

                result = num1 + num2;
                cout << "\nRisultato: " << result;

                // Esecuzione

                cout << "\n\nTornare al menu'(y/n): ";
                cin >> running;

                break;

            // Caso sottrazione

            case 2:

                // Inserimento primo numero

                cout << "\nInserisci il primo numero: ";
                cin >> num1;

                // Inserimento secondo numero

                cout << "\nInserisci il secondo numero: ";
                cin >> num2;

                // Risultato

                result = num1 - num2;
                cout << "\nRisultato: " << result;

                // Esecuzione

                cout << "\n\nTornare al menu'(y/n): ";
                cin >> running;

                break;

            // Caso moltiplicazione

            case 3:

                // Inserimento primo numero

                cout << "\nInserisci il primo numero: ";
                cin >> num1;

                // Inserimento secondo numero

                cout << "\nInserisci il secondo numero: ";
                cin >> num2;

                // Risultato

                result = num1 * num2;
                cout << "\nRisultato: " << result;

                // Esecuzione

                cout << "\n\nTornare al menu'(y/n): ";
                cin >> running;

                break;

            // Caso divisione

            case 4:

                // Inserimento primo numero

                cout << "\nInserisci il primo numero: ";
                cin >> num1;

                // Inserimento secondo numero

                cout << "\nInserisci il secondo numero: ";
                cin >> num2;

                // Risultato

                result = num1 / num2;
                cout << "\nRisultato: " << result;

                // Esecuzione

                cout << "\n\nTornare al menu'(y/n): ";
                cin >> running;

                break;

            // Caso modulo

            case 5:

                // Inserimento primo numero

                cout << "\nInserisci il primo numero: ";
                cin >> num1;

                // Inserimento secondo numero

                cout << "\nInserisci il secondo numero: ";
                cin >> num2;

                // Risultato

                result = num1 % num2;
                cout << "\nRisultato: " << result;

                // Esecuzione

                cout << "\n\nTornare al menu'(y/n): ";
                cin >> running;

                break;

            // Caso Radice quadrata

            case 6:

                // Inserimento numero

                cout << "\nInserisci numero: ";
                cin >> num1;

                // Risultato

                result = sqrt(num1);
                cout << "\nRadice quadrata: " << result;

                // Esecuzione

                cout << "\n\nTornare al menu'(y/n): ";
                cin >> running;

                break;

            // Caso Radice cubica

            case 7:

                // Inserimento numero

                cout << "\nInserisci numero: ";
                cin >> num1;
                
                // Risultato

                result = cbrt(num1);
                cout << "\nRadice cubica: " << result;

                // Esecuzione

                cout << "\n\nTornare al menu'(y/n): ";
                cin >> running;

                break;

            // Caso Arrotondamento per eccesso

            case 8:

                // Inserimento numero

                cout << "\nInserisci numero: ";
                cin >> num;

                // Risultato

                resultf = ceil(num);
                cout << "\nRisultato: " << resultf;

                // Esecuzione

                cout << "\n\nTornare al menu'(y/n): ";
                cin >> running;

                break;

            // Caso Arrotondamento per difetto

            case 9: 

                // Inserimento numero

                cout << "\nInserisci numero: ";
                cin >> num;

                // Risultato

                resultf = floor(num);
                cout << "\nRisultato: " << resultf;

                // Esecuzione

                cout << "\n\nTornare al menu'(y/n): ";
                cin >> running;

                break;

            // Caso Arrotondamento a numero vicino

            case 10:

                // Inserimento numero

                cout << "\nInserisci numero: ";
                cin >> num;

                // Risultato

                resultf = round(num);
                cout << "\nRisultato: " << resultf;

                // Esecuzione

                cout << "\n\nTornare al menu'(y/n): ";
                cin >> running;

                break;

            // Caso Valore assoluto

            case 11:

                // Inserimento numero

                cout << "\nInserisci numero: ";
                cin >> num1;

                // Risultato

                result = abs(num1);
                cout << "\nValore assoluto: " << result;

                // Esecuzione

                cout << "\n\nTornare al menu'(y/n): ";
                cin >> running;

                break;

            // Caso Potenza

            case 12:

                // Inserimento base

                cout << "\nInserisci base: ";
                cin >> num1;

                // Inserimento esponente

                cout << "\nInserisci esponente: ";
                cin >> num2;

                // Risultato

                result = pow(num1,num2);
                cout << "\nRisultato: " << result;

                // Esecuzione

                cout << "\n\nTornare al menu'(y/n): ";
                cin >> running;

                break;
            
            // Caso Seno angolo

            case 13:

                // Inserimento angolo

                cout << "\nInserisci angolo: ";
                cin >> num;

                // Risultato

                resultf = sin(num);
                cout << "\nSeno angolo: " << resultf;

                // Esecuzione

                cout << "\n\nTornare al menu'(y/n): ";
                cin >> running;

                break;

            // Caso Coseno angolo

            case 14:

                // Inserimento angolo

                cout << "\nInserisci angolo: ";
                cin >> num;

                // Risultato

                resultf = cos(num);
                cout << "\nCoseno angolo: " << resultf;

                // Esecuzione

                cout << "\n\nTornare al menu'(y/n): ";
                cin >> running;

                break;

            // Caso Tangente angolo

            case 15:

                // Inserimento angolo

                cout << "\nInserisci angolo: ";
                cin >> num;

                // Risultato

                resultf = tan(num);
                cout << "\nTangente angolo: " << resultf;

                // Esecuzione

                cout << "\n\nTornare al menu'(y/n): ";
                cin >> running;

                break;

            // Caso opzione inserita non valida

            default:

                // Stampa errore

                cout << "\n\nErrore, opzione inserita non valida!";

        }

    }

    return 0;

}