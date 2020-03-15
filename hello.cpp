#include <iostream>
using namespace std;

class Person {
private:
	string Name;
	int Age;
public:
	Person(string name, int age) {
		Name = name;
		Age = age;
	}
	string getName(void){
		return Name;
	}
};

int main()
{
	Person Kenneth = Person("Kenneth", 32);

	auto my_name = Kenneth.getName();

	cout << "hello: " << my_name << flush;
	return 0;
}
