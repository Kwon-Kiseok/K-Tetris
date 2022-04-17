#include "stdafx.h"
#include "Block_I.h"

Block_I::Block_I()
{
	rotate_count = 0;
	color = OBJECT_COLOR::LIGHTCYAN;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			for (int k = 0; k < 4; ++k)
			{
				shape[i][j][k] = BlockShape::I[i][j][k];
			}
		}
	}
}
