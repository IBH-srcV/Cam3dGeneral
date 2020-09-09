#include "Cam3dA.h"
#include "Cam3dB.h"


int main()
{
	Cam3dA Camera_A;						// Instanz der Klasse Cam3dA
	Camera_A.SetCam(800, 600, 30);			// SetCam Standard bzgl. Basisklasse
	Camera_A.Start();						// Kamera A Start
	Camera_A.CaptureFrame();				// CaptureFrame Override Methode für Cam3dA
	Camera_A.Stop();						// Kamera A Stop


	Cam3dB Camera_B;						// Instanz der Klasse Cam3dB
	Camera_B.SetCam(1280, 800, 60, true);	// SetCam Variation bzgl. Basismethode (zusätzlicher Parameter "EmitterOn = true")
	Camera_B.Start();						// Kamera B Start
	Camera_B.CaptureFrame();				// CaptureFrame Override Methode für Cam3dB
	Camera_B.Stop();						// Kamera B Stop
}