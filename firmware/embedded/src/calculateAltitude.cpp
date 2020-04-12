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
	int32_t altitudeBelow = altitudeLookup(index);
	int32_t altitudeAbove = altitudeLookup(index-1);

	//pressure at altitudeAbove 
	int32_t pressureAbove = (int32_t)(index << bitshift);

	//linear interpolation using bit shifting
	uint32_t interpolation = (int32_t)((uint32_t)((uint32_t)(altitudeAbove - altitudeBelow)*((uint32_t)(pressure - pressureAbove))) >> bitshift);

	return altitudeAbove - interpolation;
}

/* Returns altitude in 1000*meters for input index. 
 * -altitude every 2^10 Pascals
 * -highest to lowest altitude (lowest to highest pressure)
 */
int32_t calculateAltitude::altitudeLookup(const uint8_t& index) {

	int32_t altitudeTable[104] = {

	//Altitude,  pressure
		30898900, //1024
		26327697, //2048
		23696402, //3072
		21848320, //4096
		20425517, //5120
		19270467, //6144
		18292701, //7168
		17445721, //8192
		16698633, //9216
		16030339, //10240
		15425794, //11264
		14873887, //12288
		14366183, //13312
		13896121, //14336
		13458505, //15360
		13049142, //16384
		12664605, //17408
		12302053, //18432
		11959109, //19456
		11633760, //20480
		11324287, //21504
		11029215, //22528
		10747856, //23552
		10474769, //24576
		10210746, //25600
		9955140,  //26624
		9707375,  //27648
		9466932,  //28672
		9233344,  //29696
		9006190,  //30720
		8785087,  //31744
		8569685,  //32768
		8359666,  //33792
		8154739,  //34816
		7954635,  //35840
		7759109,  //36864
		7567932,  //37888
		7380894,  //38912
		7197800,  //39936
		7018468,  //40960
		6842731,  //41984
		6670431,  //43008
		6501421,  //44032
		6335564,  //45056
		6172732,  //46080
		6012804,  //47104
		5855667,  //48128
		5701214,  //49152
		5549344,  //50176
		5399964,  //51200
		5252984,  //52224
		5108319,  //53248
		4965890,  //54272
		4825620,  //55296
		4687438,  //56320
		4551275,  //57344
		4417067,  //58368
		4284753,  //59392
		4154273,  //60416
		4025571,  //61440
		3898595,  //62464
		3773293,  //63488
		3649617,  //64512
		3527520,  //65536
		3406959,  //66560
		3287890,  //67584
		3170273,  //68608
		3054069,  //69632
		2939240,  //70656
		2825751,  //71680
		2713568,  //72704
		2602657,  //73728
		2492986,  //74752
		2384524,  //75776
		2277244,  //76800
		2171115,  //77824
		2066111,  //78848
		1962205,  //79872
		1859372,  //80896
		1757589,  //81920
		1656830,  //82944
		1557073,  //83968
		1458297,  //84992
		1360479,  //86016
		1263600,  //87040
		1167640,  //88064
		1072578,  //89088
		978398,   //90112
		885080,   //91136
		792607,   //92160
		700962,   //93184
		610130,   //94208
		520093,   //95232
		430837,   //96256
		342346,   //97280
		254606,   //98304
		167604,   //99328
		81324,    //100352
		-4245,    //101376
		-89118,   //102400
		-173306,  //103424
		-256821,  //104448
		-339677,  //105472
		-421883,  //106496

	};
	return altitudeTable[index];
}
