/// @file		Cam3dGeneral.h:
/// @brief		Generalisierte C++ Klasse zum Prozessieren von Sensordaten unterschiedlicher 3D Kameras 
///				(bspw. Intel RealSense D400er Serie, Microsoft Kinect, ZED, Livox Horizon,...)
/// @brief		OUTPUT: 3D Punktwolke im Point Cloud Data Format (PCD)	
/// @brief		Abstrakte Basismethoden sind als "Pure Virtual" definiert, nach Ableitung für das jeweilige 
///				Kameramodell müssen diese zwingend überschrieben werden -> Interface  
///	@author		Sylvio Probst			
///	@author		Ingenieurbüro Hannweber GmbH			 
///	@version	0.2			
/// @date		09.09.2020
/// Copyright (c) Ingenieurbüro Hannweber GmbH 2020

#pragma once

#include <pcl/point_cloud.h>



class Cam3dGeneral
{

public:

	// Konstruktor
	Cam3dGeneral();

	// Destruktor
	virtual ~Cam3dGeneral();
	
	// Members 
	bool									m_bRunning;			// Status
	bool									m_bFrameCaptured;	// Status
	pcl::PointCloud<pcl::PointXYZ>			m_PointCloud;		// Output

	// Methoden
	void									SetXres(float _xRes);
	void									SetYres(float _yRes);
	void									SetFPS(int _fps);

	// Methoden Virtual (Überschreiben optional)
	virtual void							SetCam(float _xRes, float _yRes, float _fps);
	virtual void							Start(void);
	virtual void							Stop(void);
	
	// Methoden Pure Virtual (Abstrakte Methoden -> Überschreiben zwingend)
	// -> erzwingt, dass diese in der abgeleiteten Klasse überschrieben/angepasst werden müssen = Interface  
	// -> Kennzeichen: "virtual... = 0;"
	virtual void							LoadSettingsFromFile(void)						= 0;
	virtual void							SaveSettingsToFile(void)						= 0;
	virtual void							CaptureFrame(void)								= 0;
	virtual void							TransformCoordinates(void)						= 0;
	virtual pcl::PointCloud<pcl::PointXYZ>* CreatePointCloudPCD(void)						= 0;

	
private:	
	
	float  m_xRes;
	float  m_yRes;
	float  m_FPS;

};