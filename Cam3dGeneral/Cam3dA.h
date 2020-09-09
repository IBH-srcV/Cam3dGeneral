// Cam Modell A (ohne Emitter)
#include "Cam3dGeneral.h"

class Cam3dA : public Cam3dGeneral
{
public:

	Cam3dA();			// (wird nicht vererbt)
	~Cam3dA();		// (wird nicht vererbt)


	// Methoden überschreiben (inkl. aller Realisierungen)
	// --
	
	// Methoden Abstrakt überschreiben (Interface) 
	void							LoadSettingsFromFile(void)	override;
	void							SaveSettingsToFile(void)	override;
	void							CaptureFrame(void)			override;
	void							TransformCoordinates(void)	override;
	pcl::PointCloud<pcl::PointXYZ>* CreatePointCloudPCD(void)	override;
	
};
