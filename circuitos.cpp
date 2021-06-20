#include <iostream>

using namespace std;

//Declarando variáveis e operações
struct tCircuito {
    int R1;
    int R2;
    int V1;
    int req1 = R1 + R2; 
    int req2 = (R1*R2)/(R1+R2);
    int i1 = V1/req1;
    int i2 = V1/req2;
    int p1 = V1*i1;
    int p2 = V1*i2;