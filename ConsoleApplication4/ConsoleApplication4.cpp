#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    
    int weight, dist, Smax = 0, S1, S2;  
    int const tank = 300;
   
    cout << "Введите вес груза, который собираетесь перевозить (кг.) :\n";
    cin >> weight;                                                                                       
    if (weight > 2000) { cout << " Превышен максимальный порог веса!\n";  }
    if (weight >= 0 && weight <= 500) { dist = 1; Smax = tank / dist; }                     
    if (weight >= 501 && weight <= 1000) { dist = 4; Smax = tank / dist; }                 
    if (weight >= 1001 && weight <= 1500) { dist = 7; Smax = tank / dist; }                
    if (weight >= 1501 && weight <= 2000) { dist = 9; Smax = tank / dist; }
   
    cout << " Введите расстояние от (A) до (B) (км.) :\n";
    cin >> S1;
    if (Smax <= S1) { cout << " Полёт невозможен! Топлива не хватит до точки (B)!\n";  }
    if (Smax > S1) { S1 = Smax - S1; }

    cout << " Введите расстояние от (B) до (C) (км.) :\n";
    cin >> S2;
    if (Smax <= S2) { cout << " Полёт невозможен! Топлива не хватит до точки (C)!\n"; }
    if (Smax > S2) 
    {
        S2 = (S2 - S1) * dist;
        {
            if (S2 < 0) { cout << " Нет необходимости доливать топливо, в баке достаточно топлива.\n";}
        }
        cout << " В точке (B) необходимо долить " << S2 << " литров топлива для полёта до точки (C).\n";
    }
    
}

