#include "stdafx.h"
#include "Block_O.h"

Block_O::Block_O()
{
	rotate_count = 0;
	color = OBJECT_COLOR::BROWN;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			for (int k = 0; k < 4; ++k)
			{
				shape[i][j][k] = BlockShape::O[i][j][k];
			}
		}
	}
}
