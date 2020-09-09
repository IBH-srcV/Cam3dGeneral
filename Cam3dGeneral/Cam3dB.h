// Cam Modell B (mit Emitter)
#include "Cam3dGeneral.h"

class Cam3dB : public Cam3dGeneral
{
public:

	Cam3dB();		// (wird nicht vererbt)
	~Cam3dB();		// (wird nicht vererbt)

	 
	// Methode überschreiben (inkl. aller Realisierungen) -> hier kommt zusätzlicher Parameter "EmitterOn" hinzu
	void SetCam(float _xRes, float _yRes, float _fps, bool _EmitterOn);
	
	// Methoden Abstrakt (Interface) überschreiben
	void							LoadSettingsFromFile(void)			override;
	void							SaveSettingsToFile(void)			override;
	void							CaptureFrame(void)					override;
	void							TransformCoordinates(void)			override;
	pcl::PointCloud<pcl::PointXYZ>* CreatePointCloudPCD(void)			override;
	
	// Methoden Neu
	void SetEmitterState(bool bOn);
	bool GetEmitterState(void);


private:

	bool m_bEmitter;

};
