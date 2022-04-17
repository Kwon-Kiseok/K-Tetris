#include "stdafx.h"
#include "Block_J.h"

Block_J::Block_J()
{
	rotate_count = 0;
	color = OBJECT_COLOR::YELLOW;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			for (int k = 0; k < 4; ++k)
			{
				shape[i][j][k] = BlockShape::J[i][j][k];
			}
		}
	}
}
