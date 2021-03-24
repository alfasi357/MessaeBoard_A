#include <string>
#include "Direction.hpp"

using namespace std;

namespace ariel{
class Board{ 
public:   
static void post(unsigned int x, unsigned int y, Direction d, std::string str);
static string read( unsigned int x,  unsigned int y, Direction d, unsigned int num);
void show();
};
}