//Толстых Агата
//Задание 1
/*#include <iostream>
#include <string>

int main()
{
    int A;
    int B;
    std::cin >> A >> B;
    std::cout << A+B;
}*/

//Задание 2
/*#include <iostream>
#include <string>

int main()
{
    int A;
    int B;
    std::cin >> A >> B;
    std::cout << A+B << " " << A-B << " " << A*B << " " << A/B;
}*/

//Задание 3
/*#include <iostream>
#include <cmath>

int main()
{
    unsigned long A;
    unsigned long B;
    std::cin >> A >> B;
    std::cout << sqrt(pow(A,2) + pow(B,2));
}*/

//Задание 4
/*#include <iostream>
#include <string>

int main()
{
    unsigned long V;
    unsigned long T;
    std::cin >> V >> T;
    unsigned long S =(V*T)%109;
    std::cout << S;
}*/

//Задание 5
#include <iostream>
#include <string>

int main()
{
    unsigned long n;
    unsigned long H;
    unsigned long M;
    unsigned long S;
    std::cin >> n;
    H = n / 3600 % 24;
    M = n / 60 % 60;
    S = n % 60;
    std::cout << H << ":";
    if (M < 10) std::cout << "0";
    std::cout << M << ":";
    if (S < 10) std::cout << "0";
    std::cout << S;
}