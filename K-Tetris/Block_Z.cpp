#include "stdafx.h"
#include "Block_Z.h"

Block_Z::Block_Z()
{
	rotate_count = 0;
	color = OBJECT_COLOR::GREEN;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			for (int k = 0; k < 4; ++k)
			{
				shape[i][j][k] = BlockShape::Z[i][j][k];
			}
		}
	}
}
