#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

int main(){ fast_io
    double media = 0.0;

    cout << fixed << setprecision(1);

    double num;
    for(int it = 1; it <= 4; ++it){
        cin >> num;
        
        if(it == 1)
            media += (num * 2);
        if(it == 2)
            media += (num * 3);
        if(it == 3)
            media += (num * 4);
        if(it == 4)
            media += num;
    }
    
    media /= 10;

    cout << "Media: " << media << endl;
    
    if(media >= 7.0){
        cout << "Aluno aprovado." << endl;
        return 0;
    }
    
    if(media < 5.0){
        cout << "Aluno reprovado." << endl;
        return 0;
    }
    
    cout << "Aluno em exame." << endl;

    double exam;
    cin >> exam;

    cout << "Nota do exame: " << exam << endl;

    double media_final = (media + exam) / 2;

    if(media_final >= 5.0)
        cout << "Aluno aprovado." << endl;
    else
        cout << "Aluno reprovado." << endl;
    
    cout << "Media final: " << media_final << endl;

    return 0;
}