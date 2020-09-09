#include "Cam3dB.h"

Cam3dB::Cam3dB()
{
	// Init
	m_bEmitter = false;
}
Cam3dB::~Cam3dB()
{
}

void Cam3dB::LoadSettingsFromFile(void)
{

}
void Cam3dB::SaveSettingsToFile(void)
{

}
void Cam3dB::SetCam(float _xRes, float _yRes, float _fps, bool _EmitterOn)
{
	SetXres(_xRes);
	SetYres(_yRes);
	SetFPS(_fps);
	SetEmitterState(_EmitterOn);
}
void Cam3dB::CaptureFrame(void)
{
	Cam3dB::m_PointCloud.clear();
	m_PointCloud.push_back(pcl::PointXYZ(2, 2, 2));

	m_bFrameCaptured = true;
}
void Cam3dB::TransformCoordinates(void)
{
}
pcl::PointCloud<pcl::PointXYZ>* Cam3dB::CreatePointCloudPCD(void)
{
	return &m_PointCloud;
}
void Cam3dB::SetEmitterState(bool bOn)
{ 
	m_bEmitter = bOn; 
}
bool Cam3dB::GetEmitterState(void)
{
	return(m_bEmitter);
}
