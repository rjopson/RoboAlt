/*
 * calculateAltitude.cpp
 */

#include "calculateAltitude.h"

/*Default constructor
*/
calculateAltitude::calculateAltitude() {

}

/* Calculate AGL altitude from pressure using standard atmosphere. Returns in 100*meters
 *
 */
int32_t calculateAltitude::calculateAltitudeAGL(const int32_t& pressure, const int32_t& pressureGround) {

	return calculateAltitudeMSL(pressure) - calculateAltitudeMSL(pressureGround);
}

/* Calculate MSL altitude from pressure using standard atmosphere. Returns in 100*meters
 * -Sensor is good to 10 mbar (1000 Pa, which is about 2^10). 
 * -Lookup table is every 2^10 Pascals (104 altitudes)
 * -Between altitude values, linear interpolation
 */
int32_t calculateAltitude::calculateAltitudeMSL(const int32_t& pressure) {

	//value used for bitshifting. Refers increment of measurements, in this case every 2^10 Pascal
	uint8_t bitshift = 10;

	//find index in table above of current pressure reading
	uint8_t index = (uint8_t)(pressure >> bitshift);

	//altitudes bracketing pressure reading
	int32_t altitudeBelow = altitudeLookup(index-1);
	int32_t altitudeAbove = altitudeLookup(index);

	//pressure at altitudeBelow 
	int32_t pressureBelow = (int32_t)(index << bitshift);

	//linear interpolation using bit shifting
	int32_t interpolation = (int32_t)(((altitudeAbove - altitudeBelow)*(pressure - pressureBelow)) >> bitshift);

	return altitudeBelow + interpolation;
}

/* Returns altitude in 100*meters for input index. 
 * -altitude every 2^10 Pascals
 * -highest to lowest altitude (lowest to highest pressure)
 */
int32_t calculateAltitude::altitudeLookup(const uint8_t& index) {

	int32_t altitudeTable[104] = {

	//Altitude,  pressure
		3089890, //1024
		2632770, //2048
		2369640, //3072
		2184832, //4096
		2042552, //5120
		1927047, //6144
		1829270, //7168
		1744572, //8192
		1669863, //9216
		1603034, //10240
		1542579, //11264
		1487389, //12288
		1436618, //13312
		1389612, //14336
		1345850, //15360
		1304914, //16384
		1266460, //17408
		1230205, //18432
		1195911, //19456
		1163376, //20480
		1132429, //21504
		1102921, //22528
		1074786, //23552
		1047477, //24576
		1021075, //25600
		995514, //26624
		970737, //27648
		946693, //28672
		923334, //29696
		900619, //30720
		878509, //31744
		856968, //32768
		835967, //33792
		815474, //34816
		795464, //35840
		775911, //36864
		756793, //37888
		738089, //38912
		719780, //39936
		701847, //40960
		684273, //41984
		667043, //43008
		650142, //44032
		633556, //45056
		617273, //46080
		601280, //47104
		585567, //48128
		570121, //49152
		554934, //50176
		539996, //51200
		525298, //52224
		510832, //53248
		496589, //54272
		482562, //55296
		468744, //56320
		455128, //57344
		441707, //58368
		428475, //59392
		415427, //60416
		402557, //61440
		389859, //62464
		377329, //63488
		364962, //64512
		352752, //65536
		340696, //66560
		328789, //67584
		317027, //68608
		305407, //69632
		293924, //70656
		282575, //71680
		271357, //72704
		260266, //73728
		249299, //74752
		238452, //75776
		227724, //76800
		217111, //77824
		206611, //78848
		196220, //79872
		185937, //80896
		175759, //81920
		165683, //82944
		155707, //83968
		145830, //84992
		136048, //86016
		126360, //87040
		116764, //88064
		107258, //89088
		97840, //90112
		88508, //91136
		79261, //92160
		70096, //93184
		61013, //94208
		52009, //95232
		43084, //96256
		34235, //97280
		25461, //98304
		16760, //99328
		8132, //100352
		-425, //101376
		-8912, //102400
		-17331,//103424
		-25682,//104448
		-33968,//105472
		-42188,//106496
	};
	return altitudeTable[index];
}
