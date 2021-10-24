#include <iostream>
#include <tuple>
#include <vector>
struct Person
{
    std::string Surname;
    std::string Name;
    std::string Fathers_Name;
};
    tie(Surname, Name, Fathers_Name) << Person;
    tie() < ();
    tie() == ();

struct PhoneNumber 
{
    int Country_Number;
    int City_Number;
    std::string Number;
    int Extra_Number;
}

class PhoneBook{
private:
    vector<pair<string, auto>> book;
public:
    PhoneBook() {
        book = {
            {"Ilin Petr Artemovich", 7 17 4559767 -},
            {"Zaitsev Zakhar Artemovich", 125 44 4164751 -},
            {"Dubinin Aleksei Mikhailovich", 7 473 7449054 -},
            {"Solovev Artur Mikhailovich", 4 940 2556793 -},
            {"Gerasimov Miroslav Stanislavovich", 7 367 7508887 -}
        };
    }

    void SortByPhone() {
        sort(book.begin(), book.end(), compare);
    };

    void SortByName(){
        sort(book.begin(), book.end(), compare);
    };

    PhoneBook book;
        optional<int> result;
        result = book.GetPhoneNumber("Ilin Petr Artemovich");
        if(result.has_value())
            cout << result.value() << endl;
        else
            cout << "Not Found!" << endl;
};
int main() {

       cout << book;
 
       cout << "------SortByPhone-------" << endl;
       book.SortByPhone();
       cout << book;
 
       cout << "------SortByName--------" << endl;
       book.SortByName();
       cout << book;
 
       cout << "-----GetPhoneNumber-----" << endl;
       // лямбда функция, которая принимает фамилию и выводит номер телефона этого        человека, либо строку с ошибкой
       auto print_phone_number = [&book](const string& surname) { 
              cout << surname << "\t"; 
              auto answer = book.GetPhoneNumber(surname); 
              if (get<0>(answer).empty()) 
                     cout << get<1>(answer); 
              else 
                     cout << get<0>(answer); 
                     cout << endl; 
       };
}

