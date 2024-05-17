
#include <iostream>
#include <stdexcept>
using namespace std;
class exception
{
    public:
    class LESS{};
    class HIGH{};
    void check(int i)
    {
        if(i == 0)
        throw LESS();
        else 
        throw HIGH();
    }


};

int main() {
    exception a;

    try {

    }
  
   return 0;
}
