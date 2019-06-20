#pragma once


#include "Windows.h"

//функция для работы с клавиатурой 
bool IsKeyDown( int virtualKeyCode )
{	
	short keyState = GetAsyncKeyState( virtualKeyCode );
	return ( ( keyState & 0x8000 ) > 0 );
}
