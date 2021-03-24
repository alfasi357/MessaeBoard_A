#include "doctest.h"
#include "Board.hpp"
#include <string>
#include "Direction.hpp"
using namespace ariel;
using ariel::Direction;
#include <iostream>
using namespace std;

Board b;

TEST_CASE("vertical"){
b.post(1,1,Direction::Vertical,"hello");    
CHECK(b.read(1,1,Direction::Vertical,5).compare("hello"));
b.post(1,10,Direction::Vertical,"turtle");    
CHECK(b.read(1,10,Direction::Vertical,6).compare("turtle"));
b.post(3,1,Direction::Vertical,"something");    
CHECK(b.read(3,1,Direction::Vertical,9).compare("something"));
b.post(3,12,Direction::Vertical,"special");    
CHECK(b.read(3,12,Direction::Vertical,7).compare("special"));
b.post(200,100,Direction::Vertical,"hero");    
CHECK(b.read(200,100,Direction::Vertical,4).compare("hero"));
b.post(200,90,Direction::Vertical,"super");    
CHECK(b.read(200,90,Direction::Vertical,5).compare("super"));
b.post(6,6,Direction::Vertical,"inferno");    
CHECK(b.read(6,6,Direction::Vertical,7).compare("inferno"));
b.post(42,42,Direction::Vertical,"supercarlyfrejelisticexbialidoushes");    
CHECK(b.read(42,42,Direction::Vertical,35).compare("supercarlyfrejelisticexbialidoushes"));
b.post(10,5,Direction::Vertical,"ten or five");    
CHECK(b.read(10,5,Direction::Vertical,11).compare("ten or five"));
b.post(7,11,Direction::Vertical,"prime");    
CHECK(b.read(7,11,Direction::Vertical,5).compare("prime"));
}

TEST_CASE("horizontal"){
b.post(1,1,Direction::Horizontal,"had");    
CHECK(b.read(1,1,Direction::Horizontal,3).compare("had"));
b.post(41,11,Direction::Horizontal,"looking");    
CHECK(b.read(41,11,Direction::Horizontal,7).compare("looking"));
b.post(12,11,Direction::Horizontal,"bad");    
CHECK(b.read(12,11,Direction::Horizontal,3).compare("bad"));
b.post(111,156,Direction::Horizontal,"influence");    
CHECK(b.read(111,156,Direction::Horizontal,9).compare("influence"));
b.post(30,24,Direction::Horizontal,"life");    
CHECK(b.read(30,24,Direction::Horizontal,4).compare("life"));
b.post(92,1,Direction::Horizontal,"grant");    
CHECK(b.read(92,1,Direction::Horizontal,5).compare("grant"));
b.post(45,45,Direction::Horizontal,"wish");    
CHECK(b.read(45,45,Direction::Horizontal,4).compare("wish"));
b.post(100,100,Direction::Horizontal,"magical");    
CHECK(b.read(100,100,Direction::Horizontal,5).compare("magic"));
b.post(32,23,Direction::Horizontal,"crazy");    
CHECK(b.read(32,23,Direction::Horizontal,4).compare("craz"));
b.post(7,77,Direction::Horizontal,"hakuna matata");    
CHECK(b.read(7,77,Direction::Horizontal,12).compare("hakuna matat"));



}