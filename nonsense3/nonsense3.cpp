#include <iostream>
#include <string>

class Person
{
public:
    void setName(std::string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setId(int id)
    {
        this->id = id;
    }

    void getInfo()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "ID: " << id << std::endl;
    }

private:
    std::string name;
    int age;
    int id;
};

int main()
{
    Person p;

    p.setName("John Doe");
    p.setAge(23);
    p.setId(1);

    p.getInfo();

    return 0;
}