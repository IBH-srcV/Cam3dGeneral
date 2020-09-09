#include "Cam3dA.h"

Cam3dA::Cam3dA()
{
}
Cam3dA::~Cam3dA()
{
}

void Cam3dA::LoadSettingsFromFile(void)
{

}
void Cam3dA::SaveSettingsToFile(void)
{

}

void Cam3dA::CaptureFrame(void)
{
	Cam3dA::m_PointCloud.clear();
	m_PointCloud.push_back(pcl::PointXYZ(1, 1, 1));

	m_bFrameCaptured = true;
}
void Cam3dA::TransformCoordinates(void)
{
}
pcl::PointCloud<pcl::PointXYZ>*  Cam3dA::CreatePointCloudPCD(void)
{
	return &m_PointCloud;
}
