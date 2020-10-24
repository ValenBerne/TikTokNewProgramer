#include <iostream>
using namespace std;
#define EXITO 0

int recurcion(int inicio, int tope){
    if(inicio%3   ==  0){
        if(inicio%5 ==  0){
            cout    << "Fizbuzz";
        }
        else{
            cout    <<  "Fizz";
        }
    }
    else if(inicio%5    ==  0){
        cout    <<  "Buzz";
    }
    else{
        cout    <<  inicio;
    }
    cout    <<  endl;
    if(inicio   <   tope){
        recurcion(inicio+1, tope);
    }
    return EXITO;
}

int main() {
    int tope;
    cout    <<  "Cual queres que sea el tope?"  <<  endl;
    cin     >>  tope;
    recurcion(1, tope);
    return 0;
}
