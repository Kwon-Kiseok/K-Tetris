#include "stdafx.h"
#include "Block_T.h"

Block_T::Block_T()
{
	rotate_count = 0;
	color = OBJECT_COLOR::GREEN;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			for (int k = 0; k < 4; ++k)
			{
				shape[i][j][k] = BlockShape::T[i][j][k];
			}
		}
	}
}
