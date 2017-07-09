//
// World map. Creating it, refreshing it.
//

#include "world.h"

world::world() {}
world::~world() {}

std::string line = "______________________________";

void world::creation(world buildmap)
{

   std::cout << line << "\n";

   for (int i = 0; i < buildmap.getxCord() ; ++i)
   {
      for (int j = 0; j < buildmap.getyCord(); ++j)
      {
         std::cout << " " << buildmap.getPlace(i) << " ";
      }

   std::cout << "\n";

   }

   std::cout << line << "\n";

}
