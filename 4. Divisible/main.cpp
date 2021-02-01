#include<bits/stdc++.h>
using namespace std;

string solve (vector<int> A) {
    int n = A.size(); int half = n/2, number=0;
    for (int i = 0; i < half; ++i)
    {
        number += to_string(A[i])[0] - 48;
        number = number * 10;
    }
    
    for (int i = half; i < n; ++i)
    {
        number += A[i]%10;
        if(i != n-1){
            number = number * 10;
        }
    }
    if(number % 11 ==0){
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