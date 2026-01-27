#include <iostream>
#include <exception>
using namespace std;

class SalaryException : public exception
{
public:
    const char* what() const noexcept override
    {
        return "Salary cannot be negative";
    }
};

int main()
{
    int salary;
    cin >> salary;

    try
    {
        if (salary < 0)
            throw SalaryException();

        cout << "Salary accepted";
    }
    catch (const exception &e)
    {
        cout << e.what();
    }

    return 0;
}
