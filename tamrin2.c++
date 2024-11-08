#include<conio.h>
#include <iostream>
using namespace std;

void showMenu() {
    cout << "ماشین حساب چهار عمل اصلیn";
    cout << "1. جمعn";
    cout << "2. تفریقn";
    cout << "3. ضربn";
    cout << "4. تقسیمn";
    cout << "0. خروجn";
}

int main() {
    int choice;
    double num1, num2;

    do {
        showMenu();
        cout << "لطفا گزینه مورد نظر را وارد کنید: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "عدد اول را وارد کنید: ";
            cin >> num1;
            cout << "عدد دوم را وارد کنید: ";
            cin >> num2;
        }

        switch (choice) {
            case 1:
                cout << "نتیجه جمع: " << (num1 + num2) << "n";
                break;
            case 2:
                cout << "نتیجه تفریق: " << (num1 - num2) << "n";
                break;
            case 3:
                cout << "نتیجه ضرب: " << (num1 * num2) << "n";
                break;
            case 4:
                if (num2 != 0) {
                    cout << "نتیجه تقسیم: " << (num1 / num2) << "n";
                } else {
                    cout << "خطا: تقسیم بر صفر امکان‌پذیر نیست.n";
                }
                break;
            case 0:
                cout << "خروج از برنامه.n";
                break;
            default:
                cout << "گزینه نامعتبر است. لطفا دوباره امتحان کنید.n";
        }

        cout << "n";

    } while (choice != 0);

    return 0;
}
