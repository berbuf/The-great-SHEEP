#ifndef CHUNK_HPP_
# define CHUNK_HPP_

# include <vector>
# include "vect.hpp"
# include "tile.hpp"

struct Chunk
{
  Tile tiles[16 * 16];
  Vect<2, int> coord;
};

#endif // !CHUNK_HPP_
