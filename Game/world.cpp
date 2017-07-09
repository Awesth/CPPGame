//
// World map. Creating it, refreshing it.
//

#include "world.h"

world::world() {}
world::~world() {}

void world::creation(world buildmap)
{
   for (int i = 0; i < buildmap.getxCord() ; ++i)
   {
      for (int j = 0; j < buildmap.getyCord(); ++j)
      {
         if (buildmap.getPlace(i) == 1)
         {
            std::cout << " . ";
         }
         if (buildmap.getPlace(i) == 2)
         {
            std::cout << " H ";
         }
         if (buildmap.getPlace(i) == 3)
         {
            std::cout << " C ";
         }
         if (buildmap.getPlace(i) == 4)
         {
            std::cout << " F ";
         }
      }
   std::cout << "\n";
   }
}
