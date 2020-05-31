#include <iostream>
#include <vector>

class Base{
    std::vector<Base *> objects;
public:
    void add_ptr(Base oobj){
        objects.push_back(&oobj);
    }
};

struct A : Base{};
struct B : Base{};
struct C : Base{};

int main() {
    A a1_obj;
    B b1_obj, b2_obj;
    C c1_obj, c2_obj;

    a1_obj.add_ptr(b1_obj);
    a1_obj.add_ptr(c1_obj);
    a1_obj.add_ptr(b2_obj);
    a1_obj.add_ptr(c2_obj);
    b2_obj.add_ptr(c1_obj);



    return 0;
}
