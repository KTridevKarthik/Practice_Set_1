#include <iostream>
#include <string>
using namespace std;
class bank_account{
private :
string name;
float balance;
public:

void Set_Value(string n, float b){
    this->name = n;
    this->balance = b;
}
void get_value(void){
    cout << "Name : " <<this->name << "Balance : " <<this->balance<<endl;
}
void deposit (float n1)
{
    this->balance = this->balance + n1;

}
float withdraw (float n2)
{
    if (this->balance > n2){
        this->balance = this->balance - n2;
    }
    else {
        cout << "Low Balance.";
    }

}
};
int main(){
    bank_account a1;
    bank_account a2;
    a1.Set_Value ("Tridev", 999);
    a2.Set_Value ("Jeffrey", 0.69);
    a1.get_value();
    a2.get_value();
    a1.deposit(1.69);
    a2.deposit(69.1);
    a1.get_value();
    a2.get_value();
    a1.withdraw("Tridev",10);
    a2.withdraw("Jeffrey",)
    return 0;
}