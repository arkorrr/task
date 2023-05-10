#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    int S, V;   //#1
    cout << "Enter kilometers: "; cin >> S;
    cout << "Enter speed which human moved: "; cin >> V;
    cout << "The time that man ran " << S/V << "hours/hour" << " or " << (S/V)*60 << "Minutes " << " or " << ((S/V)*60)*60 << "Seconds";
    
    double a, b;    //#2
    cout << "Number1: "; cin >> a;
    cout << "Number2: "; cin >> b;
    int c;
    c = a + b;
    cout << "Sum of numbers: " << c << "\n";
    double v;
    v = round(b) - b;
    cout << "Sum of Number after ' , ': " << (round(a) - a) - v;
    
    double grivna, after;       //#3
    cout << "Enter sum of griven: "; cin >> grivna; 
    after = floor(grivna);
    cout << "Sum of griven = " << after << "\nSum of griven after ',' = " << grivna - after;
    
    int seconds;                            //#5
    cout << "Enter seconds: "; cin >> seconds;
    int days , hours, minutes, secondss; 
    days = seconds % 86400;
    hours = seconds % 3600;
    minutes = seconds % 60;
    cout << "Days = " << seconds / 86400;
    cout << "\nHours = " << days / 3600;
    cout << "\nMinutes = " << hours / 60;
    cout << "\nSeconds = " << minutes;
    
    double distance, time;          //#6
    cout << "Enter a distance: "; cin >> distance;
    cout << "Enter the time for which the driver will have to arrive: "; cin >> time;
    cout << "Speed for which driver will have to arrive = " << time / distance << "km/h";
    
    int laptop, count;    //#9
    double discount;
    cout << "Enter a price of laptop: "; cin >> laptop;
    cout << "Enter a how many laptop you will want to buy : "; cin >> count;
    cout << "Enter a discont for laptop: "; cin >> discount;
    cout << "Order price = " << (laptop * count) - (discount * 100);
    
    double call, stopcall, call1, call2, stopcall1, stopcall2;          //#7
    int cost, price;

    cout << "Enter the time of the call when it started(Hours): "; cin >> call;
    cout << "Enter the time of the call when it started(Minutes): "; cin >> call1;
    cout << "Enter the time of the call when it started(Seconds): "; cin >> call2;
    cout << "Enter the time of the call when it stoped(Hours): "; cin >> stopcall;
    cout << "Enter the time of the call when it stoped(Minutes): "; cin >> stopcall1;
    cout << "Enter the time of the call when it stoped(Seconds): "; cin >> stopcall2;
    price = 60 / 15; // 4 seconds = 1 kopeck
    cost = ((stopcall * 3600) + (stopcall1 * 60) + (stopcall2)) - ((call * 3600) + (call1 * 60) + (call2));
    cout << "Cost of call = " << cost / price << " kopecks";
    
    int work;               //#8
    int workingday = 8; //hours
    int onehour = 86400;
    cout << "Time that has passed since the beginning of the working day: "; cin >> work;
    workingday = workingday * onehour; // trade in seconds;
    cout << "Left to work: " << (workingday - work)/onehour << " Hours/Hour";
   /**/
}

