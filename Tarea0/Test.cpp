#include <iostream>
#include <vector>
using namespace std;



int fibonacci(int n) {
  if (n <= 0) { // Caso base
    return 0;
  } else if (n == 1) { // Case base
    return 1;
  } else { // Caso recurrente
    return fibonacci(n-1) + fibonacci(n-2);
  }
}

void matriz(int n) {
    vector< vector<int> > mat(10, vector<int>(10,0));

    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            cout << mat[i][j]<< " ";
        }
    
        cout << "\n";
    }
}

int suma_hasta_n(int n){
    int m=0;
    for(int i=1;i<=n;i++){
      m+=i;
      //cout << m << endl;
    }
    return m;
}

vector<int> BitsInN(int n){
  vector<int> binary;
  for(n; n != 0; n>>=1){
    binary.push_back(n&1);
  }
  return binary;
}

int IntInBits(vector<int> bits){
  int pot = 1;
  int n = 0;
  for(int i=0;i<bits.size();i++){
    n += pot*bits[i];
    pot*=2;
  }
  return n;
}

int main(){
    auto lambdaSuma = [&] (int a ,int b) {return a+b;};
    int a=2,b=3;
    cout << lambdaSuma(a, b) << "\n";

    int n;
    cin >> n;

    cout << suma_hasta_n(10) << endl;
    cout << fibonacci(n+1) << endl;
    //los bits se guardan al revez ej: 10 se guarda como 0101 en vez de 1010
    vector<int> Bits = BitsInN(n);
    for(int i=0;i<Bits.size();i++){
      cout << Bits[i];
    }
    
    cout << endl;
    cout << Bits[0]<< endl;
    cout << IntInBits(Bits)<< endl;


    matriz(0);


    return 0; //Siempre return 0 para main()
}