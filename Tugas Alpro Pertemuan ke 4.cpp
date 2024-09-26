#include <iostream>
#include <vector>
using namespace std;

bool isPrime (int n){
    if (n <=1) return false;
    for (int i = 2; i * i <= n; i++){
            if (n % i == 0) return false;
    }
    return true;
}

vector <int> getFactors (int n){
    vector<int> factors;
    for (int i =1; i <= n; i++) {
            if (n % i == 0) factors.push_back(i);
    }
    return factors;
}

int main () {
    int start, end;
    cout << "Masukan Rentang Bilangan: ";
    cin >> start >> end;

    int TotalGanjil = 0, TotalGenap = 0, TotalPrima = 0;
    for (int i = start; i <= end; i++){
            vector<int> factors = getFactors(i);
            if (i % 2 == 0){
                    cout << i << " Adalah bilangan Genap. \nFaktornya: ";
            TotalGenap++;
            } else {
            cout << i << " Adalah bilangan Ganjil. \nFaktornya: ";
            TotalGanjil++;
            }
    for (int f : factors){
        cout << f << " ";
    }
    cout << endl;

    if (isPrime(i)){
        cout << i << " Adalah bilangan Prima." << endl;
        TotalPrima++;
    }
}

cout << endl;
cout << "Jumlah Bilangan Ganjil: " << TotalGanjil << endl;
cout << "Jumlah Bilangan Genap: " << TotalGenap << endl;
cout << "Jumlah Bilangan Prima: " << TotalPrima << endl;

return 0;
}

