#include <iostream>
using namespace std;

int main() 
{
    int n; 
    std::cin >> n;

    if(n % 2 == 1){
        std::cout << "Alice";
    }else
    {
        std::cout << "Bob";
    } 
}
