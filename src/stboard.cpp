#include "stboard.h"

// Constructor
CStBoard::CStBoard()
{
    // X Size
    m_XSize = ST_MAX_BOARD_X;
    // Y Size
    m_YSize = ST_MAX_BOARD_Y;
    // Clear
    Clear();
}

// Clear
void CStBoard::Clear()
{
	for (int nBoardY = 0; nBoardY < m_YSize; nBoardY++)
	{
		for (int nBoardX = 0; nBoardX < m_XSize; nBoardX++)
		{
			m_Board[nBoardY][nBoardX] = 0;
		}
	}
}

// Get X size
int CStBoard::GetXSize()
{
    return m_XSize;
}

// Get Y size
int CStBoard::GetYSize()
{
    return m_YSize;
}

// Get value
int CStBoard::GetValue(int nX, int nY)
{
    return m_Board[nY][nX];
}

// Set value
void CStBoard::SetValue(int nX, int nY, int nValue)
{
    m_Board[nY][nX] = nValue;
}
