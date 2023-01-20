
# include <iostream>
# include <string>

class Animal {
    protected:
        std::string type;
    public:
        Animal() {}
        Animal(const std::string &type) : type(type) {}

        virtual void makeSound() const {};
        std::string getType() const { return type; }
        ~Animal() {}
};

class Dog : public Animal {
public:
    Dog() : Animal("Dog") {}
    void makeSound() const { std::cout << "Woof!" << std::endl; }
};

class Cat : public Animal {
public:
    Cat() : Animal("Cat") {}
    void makeSound() const { std::cout << "Meow!" << std::endl; }
};

int main()
{
    Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); 
    j->makeSound();
    meta->makeSound(); // will not output anything
    return 0;
}


