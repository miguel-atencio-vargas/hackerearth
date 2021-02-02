#include<bits/stdc++.h>
using namespace std;

int sumOdds = 0, sumEvens = 0;
void evaluate(int i, int digit){
    if(i % 2 == 0){
        sumEvens += digit;
    }else{
        sumOdds += digit;
    }

}

string solve (vector<int> A) {
    
    int n = A.size(), half = n/2, number=0, digit;
    
    for (int i = 0; i < half; ++i)
    {
        digit = (to_string(A[i])[0]) - 48;
        evaluate( i, digit );
        number += digit;
        number *= 10;
    }
    
    for (int i = half; i < n; ++i)
    {
        digit = A[i]%10;
        evaluate(i, digit);
        number += digit;
        if(i != n-1){ // si no es el ultimo numero multi por 10
            number *= 10;
        }
    }
    int multiplo = sumEvens - sumOdds;
    while(multiplo > 0 ){
        multiplo -=11;
    }
    if(multiplo == 0){
        return "OUI";
    }else{
        return "NON";
    }
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
    	cin >> A[i_A];
    }

    string out_;
    out_ = solve(A);
    cout << out_;
}