#include "bits/stdc++.h"

using namespace std;

int main(){
    int n;
    while(cin >> n){
        vector<string> livros;
        for(int i=0; i<n; i++){
            string livro;
            cin >> livro;
            livros.push_back(livro);
        }
        sort(livros.begin(), livros.end());
        for(int i=0; i<n; i++){
            cout << livros[i] << endl;
        }
    }
}
