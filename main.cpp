#include <iostream>

using namespace std;

int main()
{
    int x, cont = 0;
    cin >> x;
    if (x%2 == 0){
        x++;
        while (cont < 6){
            cout << x <<endl;
            x = x + 2;
            cont++;
        }
    }else{
    while (cont < 6){
        cout << x <<endl;
        x = x + 2;
        cont++;
    }
    }
    return 0;
}
