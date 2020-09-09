/// @file		Cam3dGeneral.h:
/// @brief		Generalisierte C++ Klasse zum Prozessieren von Sensordaten unterschiedlicher 3D Kameras (bspw. Intel RealSense D400er Serie, 
/// @brief		Microsoft Kinect, ZED, Livox Horizon,...)
/// @brief		OUTPUT: 3D Punktwolke im Point Cloud Data Format (PCD)	
/// @brief		Abstrakte Basismethoden sind als "Pure Virtual" definiert, nach Ableitung für das jeweilige Kameramodell müssen diese zwingend 
/// @brief		überschrieben werden -> Interface  
///	@author		Sylvio Probst			
///	@author		Ingenieurbüro Hannweber GmbH			 
///	@version	0.2			
/// @date		09.09.2020
/// Copyright (c) Ingenieurbüro Hannweber GmbH 2020

#include "Cam3dGeneral.h"

Cam3dGeneral::Cam3dGeneral()
{
	// Inits
	m_bRunning			= false;
	m_bFrameCaptured	= false;

}
Cam3dGeneral::~Cam3dGeneral()
{
}

void Cam3dGeneral::SetCam(float _xRes, float _yRes, float _fps)
{
		SetXres(_xRes);
		SetYres(_yRes);
		SetFPS(_fps);	
}
void Cam3dGeneral::Start(void)
{
	m_bRunning = true;
}
void Cam3dGeneral::Stop(void)
{
	m_bRunning			= false;
	m_bFrameCaptured	= false;
}


void Cam3dGeneral::SetXres(float _xRes)
{
	m_xRes = _xRes;
}
void Cam3dGeneral::SetYres(float _yRes)
{
	m_yRes = _yRes;
}
void Cam3dGeneral::SetFPS(int _fps)
{
	m_FPS = _fps;
}