#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {


  struct Box b1,b2;

  initBox(&b1,3.0,4.0,2.0,5.0);  
  assertEquals("ul=(3,4),w=2,h=5", boxToString(b1), "boxToString(b1)");

  initBox(&b2,3.14159,6.2831853071,2.12121212,3.13131313);
  assertEquals("ul=(3.14,6.28),w=2.12,h=3.13", boxToString(b2), "boxToString(b2)");
  assertEquals("ul=(3,6),w=2,h=3", boxToString(b2,1), "boxToString(b2,1)");
  assertEquals("ul=(3.142,6.283),w=2.121,h=3.131", boxToString(b2,4), "boxToString(b2,4)");
  assertEquals("ul=(3.1416,6.2832),w=2.1212,h=3.1313", boxToString(b2,5), "boxToString(b2,5)");

		   
  return 0;
}
