#include "stdafx.h"
#include "Block_S.h"

Block_S::Block_S()
{
	rotate_count = 0;
	color = OBJECT_COLOR::BLUE;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			for (int k = 0; k < 4; ++k)
			{
				shape[i][j][k] = BlockShape::S[i][j][k];
			}
		}
	}
}
